// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLTRAININGROW_H
#define APODMLTRAININGROW_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface APOdmlTrainingRow : NSObject

@property (readonly, nonatomic) NSDictionary *features; // ivar: _features
@property (retain, nonatomic) NSString *rowID; // ivar: _rowID


-(BOOL)isValidFeature:(id)arg0 featureName:(id)arg1 min:(id)arg2 max:(id)arg3 sentinelValues:(id)arg4 ;
-(BOOL)isValidRow:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 ;
-(void)reportError:(NSInteger)arg0 name:(id)arg1 value:(id)arg2 ;


@end


#endif