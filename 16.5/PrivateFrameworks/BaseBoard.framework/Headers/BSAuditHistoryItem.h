// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSAUDITHISTORYITEM_H
#define BSAUDITHISTORYITEM_H

@class NSDate, NSString;
@protocol BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BSAuditHistoryItem : NSObject <BSXPCCoding, NSSecureCoding>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value; // ivar: _description


+(BOOL)supportsSecureCoding;
+(id)itemWithString:(id)arg0 ;
+(id)itemWithWithFormat:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif