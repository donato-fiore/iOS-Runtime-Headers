// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNKEYEDARCHIVER_H
#define SCNKEYEDARCHIVER_H

@class NSKeyedArchiver, NSDictionary;



@interface SCNKeyedArchiver : NSKeyedArchiver

@property (copy, nonatomic) NSDictionary *options; // ivar: options
@property (nonatomic) BOOL skipMorphTargets; // ivar: skipMorphTargets


+(id)archivedDataWithRootObject:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif