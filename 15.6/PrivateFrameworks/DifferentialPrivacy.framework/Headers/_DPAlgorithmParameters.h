// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPALGORITHMPARAMETERS_H
#define _DPALGORITHMPARAMETERS_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _DPAlgorithmParameters : NSObject

@property (readonly, nonatomic) NSDictionary *parameterDictionary; // ivar: _parameterDictionary
@property (readonly, copy, nonatomic) NSString *serverAlgorithmString; // ivar: _serverAlgorithmString


+(id)algorithmParametersForKey:(id)arg0 ;
+(id)algorithmParametersFromDictionary:(id)arg0 ;
+(id)allAlgorithmNames;
+(id)parametersFromFile:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif