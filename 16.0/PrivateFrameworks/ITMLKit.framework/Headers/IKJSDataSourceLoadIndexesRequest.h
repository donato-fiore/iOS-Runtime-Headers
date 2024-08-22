// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSDATASOURCELOADINDEXESREQUEST_H
#define IKJSDATASOURCELOADINDEXESREQUEST_H

@class JSValue;
@protocol IKJSDataSourceLoadIndexesRequest;


#import "IKJSEventListenerObject.h"
#import "IKJSDataSource.h"

@interface IKJSDataSourceLoadIndexesRequest : IKJSEventListenerObject <IKJSDataSourceLoadIndexesRequest>

 {
    int _state;
    IKJSDataSource *_dataSource;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, weak, nonatomic) JSValue *dataSource;
@property (readonly, nonatomic) BOOL isClosed;
@property (readonly, nonatomic) _NSRange range; // ivar: _range


-(id)initWithDataSource:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)cancel;
-(void)close:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif