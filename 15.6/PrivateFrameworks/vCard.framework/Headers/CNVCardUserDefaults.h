// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDUSERDEFAULTS_H
#define CNVCARDUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface CNVCardUserDefaults : NSObject



+(BOOL)boolForKey:(id)arg0 ;
+(BOOL)debugLogEnabled;
+(BOOL)includeNotesInVCards;
+(BOOL)includePhotosInVCards;
+(BOOL)includeUserSettings;
+(BOOL)isPrivateVCardFieldsEnabled;
+(NSInteger)defaultNameOrdering;
+(NSInteger)integerForKey:(id)arg0 ;
+(NSUInteger)outputFormat;
+(id)objectForKey:(id)arg0 ;
+(id)vCard21Encoding;
+(id)vCardPrivateFields;


@end


#endif