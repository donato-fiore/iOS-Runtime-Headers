// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FPACCESSCONTROLDATASOURCE_H
#define _FPACCESSCONTROLDATASOURCE_H

@protocol FPCollectionDataSource, FPXEnumerator, OS_dispatch_queue, FPCollectionDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface _FPAccessControlDataSource : NSObject <FPCollectionDataSource>

 {
    id<FPXEnumerator> *_enumerator;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (weak, nonatomic) NSObject<FPCollectionDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasMoreIncoming; // ivar: _hasMoreIncoming


-(id)initWithEnumerator:(id)arg0 ;
-(void)enumerationMightHaveResumed;
-(void)handleItems:(id)arg0 nextPage:(id)arg1 ;
-(void)invalidate;
-(void)start;


@end


#endif