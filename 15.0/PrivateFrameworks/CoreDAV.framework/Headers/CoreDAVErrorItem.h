// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVERRORITEM_H
#define COREDAVERRORITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVItemWithNoChildren.h"
#import "CoreDAVLeafItem.h"

@interface CoreDAVErrorItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *ctagOkay; // ivar: _ctagOkay
@property (retain, nonatomic) CoreDAVItemWithNoChildren *guardianRestricted; // ivar: _guardianRestricted
@property (retain, nonatomic) CoreDAVItemWithNoChildren *imageError; // ivar: _imageError
@property (retain, nonatomic) CoreDAVItemWithNoChildren *invalidImageType; // ivar: _invalidImageType
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxAttendees; // ivar: _maxAttendees
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxImageSize; // ivar: _maxImageSize
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxResourceSize; // ivar: _maxResourceSize
@property (retain, nonatomic) CoreDAVItemWithNoChildren *maxResources; // ivar: _maxResources
@property (retain, nonatomic) CoreDAVItemWithNoChildren *noUIDConflict; // ivar: _noUIDConflict
@property (retain, nonatomic) CoreDAVItemWithNoChildren *numberOfMatchesWithinLimits; // ivar: _numberOfMatchesWithinLimits
@property (retain, nonatomic) CoreDAVItemWithNoChildren *quotaExceeded; // ivar: _quotaExceeded
@property (retain, nonatomic) CoreDAVLeafItem *status; // ivar: _status
@property (retain, nonatomic) CoreDAVItemWithNoChildren *uid; // ivar: _uid
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validAddressData; // ivar: _validAddressData
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validSplit; // ivar: _validSplit
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validSyncToken; // ivar: _validSyncToken
@property (retain, nonatomic) CoreDAVItemWithNoChildren *validTimezone; // ivar: _validTimezone


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif