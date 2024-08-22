// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGFTMETRICSREFERENCEPOINT_H
#define IDSGFTMETRICSREFERENCEPOINT_H

@class NSMutableDictionary, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "IDSGFTMetricsAnonymizer.h"

@interface IDSGFTMetricsReferencePoint : NSObject {
    NSMutableDictionary *_times;
    IDSGFTMetricsAnonymizer *_anonymizer;
    NSDictionary *_template;
    os_unfair_lock_s _lock;
}


@property (copy) NSString *fromType; // ivar: _fromType
@property (copy) id *fromUniqueID; // ivar: _fromUniqueID


-(CGFloat)referenceTimeForTimeBase:(CGFloat)arg0 ;
-(id)collectForTimeBase:(CGFloat)arg0 anonymize:(BOOL)arg1 ;
-(id)description;
-(id)initWithFromType:(id)arg0 fromUniqueID:(id)arg1 anonymizer:(id)arg2 template:(id)arg3 ;
-(id)instanceForID:(id)arg0 ;
-(void)event:(id)arg0 ;
-(void)event:(id)arg0 time:(CGFloat)arg1 ;
-(void)event:(id)arg0 uniqueID:(id)arg1 ;
-(void)event:(id)arg0 uniqueID:(id)arg1 reason:(id)arg2 ;
-(void)event:(id)arg0 uniqueID:(id)arg1 reason:(id)arg2 time:(CGFloat)arg3 ;
-(void)event:(id)arg0 uniqueID:(id)arg1 time:(CGFloat)arg2 ;


@end


#endif