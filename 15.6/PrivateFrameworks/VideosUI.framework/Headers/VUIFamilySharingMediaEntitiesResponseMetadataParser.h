// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIFAMILYSHARINGMEDIAENTITIESRESPONSEMETADATAPARSER_H
#define VUIFAMILYSHARINGMEDIAENTITIESRESPONSEMETADATAPARSER_H

@class AMSURLResult;

#import <Foundation/Foundation.h>


@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject

@property (retain, nonatomic) AMSURLResult *result; // ivar: _result


-(id)_parseOffsetFromMetaBag;
-(id)_parseTotalFromMetaBag;
-(id)init;
-(id)parseAMSURLResult:(id)arg0 ;


@end


#endif