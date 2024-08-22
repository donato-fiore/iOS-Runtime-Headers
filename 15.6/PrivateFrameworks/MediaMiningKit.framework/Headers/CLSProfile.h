// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSPROFILE_H
#define CLSPROFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLSProfile : NSObject

@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(id)classIdentifier;
+(id)identifier;
+(id)informantDependenciesIdentifiers;
+(id)profileDependenciesIdentifiers;
+(id)supportedMeaningClueKeys;
-(id)description;
-(id)init;
-(id)uniqueIdentifier;
-(void)processResultsSynchronouslyForInvestigation:(id)arg0 withProgressBlock:(id)arg1 ;


@end


#endif