// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINESCOPEFLAGSUPDATE_H
#define CPLENGINESCOPEFLAGSUPDATE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CPLEngineScopeFlagsUpdate : NSObject

@property (readonly, nonatomic) NSArray *arrayDescription;
@property (readonly, nonatomic) NSInteger flags; // ivar: _flags
@property (readonly, nonatomic) BOOL hasFlagUpdates;
@property (readonly, nonatomic) NSInteger updatedFlagsMask; // ivar: _updatedFlagsMask


+(id)_arrayDescriptionForFlags:(NSInteger)arg0 remainingFlags:(*NSInteger)arg1 ;
+(id)descriptionForFlags:(NSInteger)arg0 ;
-(BOOL)valueForFlag:(NSInteger)arg0 ;
-(NSInteger)updatedFlagsFromFlags:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFlags:(NSInteger)arg0 ;
-(id)redactedDescription;
-(void)setValue:(BOOL)arg0 forFlag:(NSInteger)arg1 ;
-(void)updateFlags:(NSInteger)arg0 withFlagsValue:(NSInteger)arg1 ;
-(void)updateFlags:(id)arg0 ;


@end


#endif