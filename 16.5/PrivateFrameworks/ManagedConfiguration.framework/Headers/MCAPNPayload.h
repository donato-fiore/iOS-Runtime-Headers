// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCAPNPAYLOAD_H
#define MCAPNPAYLOAD_H

@class NSArray;


#import "MCPayload.h"

@interface MCAPNPayload : MCPayload {
    NSArray *_apnInfos;
}


@property (nonatomic) BOOL wasInstalled; // ivar: _wasInstalled


+(id)apnDomainName;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)_checkForValidContents:(id)arg0 outError:(*id)arg1 ;
-(id)_strippedAPNDefaults;
-(id)_validationErrorType:(NSInteger)arg0 forInvalidKey:(id)arg1 ;
-(id)apnDefaults;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;
-(void)_finishInitializationWithContents:(id)arg0 ;


@end


#endif