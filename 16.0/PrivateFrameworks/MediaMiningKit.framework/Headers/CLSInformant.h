// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSINFORMANT_H
#define CLSINFORMANT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CLSInformant : NSObject

@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(id)classIdentifier;
+(id)familyIdentifier;
+(id)identifier;
+(id)informantDependenciesIdentifiers;
+(id)supportedOutputClueKeys;
-(id)gatherCluesForInvestigation:(id)arg0 progressBlock:(id)arg1 ;
-(id)init;
-(id)uniqueIdentifier;


@end


#endif