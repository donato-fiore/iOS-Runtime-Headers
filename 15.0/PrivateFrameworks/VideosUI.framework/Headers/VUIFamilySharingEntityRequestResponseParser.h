// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIFAMILYSHARINGENTITYREQUESTRESPONSEPARSER_H
#define VUIFAMILYSHARINGENTITYREQUESTRESPONSEPARSER_H


#import <Foundation/Foundation.h>


@interface VUIFamilySharingEntityRequestResponseParser : NSObject



-(id)_parseContentRatingBag:(id)arg0 ;
-(id)_parsePlaybackPositionBag:(id)arg0 ;
-(id)_parseRelationship:(id)arg0 ;
-(id)_parseRelationshipBag:(id)arg0 ;
-(id)_processRawMediaEntities:(id)arg0 ;
-(id)init;
-(id)parseAMSURLResult:(id)arg0 ;


@end


#endif