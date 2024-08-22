// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGEHISTORYGROUPCHANGE_H
#define CNCHANGEHISTORYGROUPCHANGE_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNChangeHistoryAnchor.h"
#import "CNGroup.h"

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding>



@property (retain, nonatomic) CNChangeHistoryAnchor *changeAnchor; // ivar: _changeAnchor
@property (retain, nonatomic) NSNumber *changeID; // ivar: _changeID
@property (nonatomic) NSInteger changeType; // ivar: _changeType
@property (retain, nonatomic) NSString *externalID; // ivar: _externalID
@property (retain, nonatomic) NSString *externalModificationTag; // ivar: _externalModificationTag
@property (retain, nonatomic) NSString *externalURI; // ivar: _externalURI
@property (retain, nonatomic) CNGroup *group; // ivar: _group
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 changeType:(NSInteger)arg1 changeAnchor:(id)arg2 changeID:(id)arg3 externalID:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif