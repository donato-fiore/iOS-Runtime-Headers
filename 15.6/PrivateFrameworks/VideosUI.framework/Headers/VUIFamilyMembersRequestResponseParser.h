// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFAMILYMEMBERSREQUESTRESPONSEPARSER_H
#define VUIFAMILYMEMBERSREQUESTRESPONSEPARSER_H


#import <Foundation/Foundation.h>


@interface VUIFamilyMembersRequestResponseParser : NSObject



-(id)_filterCurrentFamilyMember:(id)arg0 fromResults:(id)arg1 ;
-(id)_parseFamilyMemberIdentifierFromDictionary:(id)arg0 withKey:(id)arg1 ;
-(id)_processRawFamilyMemberResults:(id)arg0 ;
-(id)init;
-(id)parseAMSURLResult:(id)arg0 ;


@end


#endif