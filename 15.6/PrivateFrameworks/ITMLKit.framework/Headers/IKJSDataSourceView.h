// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSDATASOURCEVIEW_H
#define IKJSDATASOURCEVIEW_H

@protocol IKJSDataSourceViewDelegate;

#import <Foundation/Foundation.h>

#import "IKJSDataSource.h"

@interface IKJSDataSourceView : NSObject {
    ? _delegateFlags;
}


@property (readonly, weak, nonatomic) IKJSDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<IKJSDataSourceViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) _NSRange usedIndexRange; // ivar: _usedIndexRange


-(id)initForDataSource:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif