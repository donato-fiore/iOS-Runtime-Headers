// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGCONTACTPIPELINEHELPER_H
#define SGCONTACTPIPELINEHELPER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SGContactPipelineHelper : NSObject {
    NSDictionary *_lengthsCounts;
    NSUInteger _phonesSeenInContacts;
    NSString *_mostCommonCountryCode;
    _opaque_pthread_mutex_t _helperLock;
}




+(BOOL)personExistsInContacts:(id)arg0 name:(id)arg1 handle:(id)arg2 ;
+(id)findContactsForDetailType:(NSUInteger)arg0 andValue:(id)arg1 ;
+(id)findContactsForPerson:(id)arg0 fetchingKeys:(id)arg1 ;
+(id)normalizedDigits:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)numberMatchesContactsForm:(id)arg0 ;
-(BOOL)numberMatchesContactsForm:(id)arg0 amongContactsWithIdentifiers:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif