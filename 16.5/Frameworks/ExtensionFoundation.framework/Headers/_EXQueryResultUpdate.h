// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXQUERYRESULTUPDATE_H
#define _EXQUERYRESULTUPDATE_H

@class EXQueryResult, NSSet;
@protocol NSSecureCoding;



@interface _EXQueryResultUpdate : EXQueryResult <NSSecureCoding>



@property (readonly) NSSet *addedExtensions;
@property (readonly) NSSet *removedUUIDs; // ivar: _removedUUIDs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAddedExtensions:(id)arg0 removedUUIDs:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentExtensions:(id)arg0 updatedExtensions:(id)arg1 ;
-(id)initWithIdentities:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif