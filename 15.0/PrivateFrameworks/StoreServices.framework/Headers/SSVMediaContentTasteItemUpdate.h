// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVMEDIACONTENTTASTEITEMUPDATE_H
#define SSVMEDIACONTENTTASTEITEMUPDATE_H

@class NSString, NSDate;
@protocol SSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SSVMediaContentTasteItem.h"

@interface SSVMediaContentTasteItemUpdate : NSObject <SSXPCCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SSVMediaContentTasteItem *item; // ivar: _item
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *updateDate; // ivar: _updateDate


+(BOOL)supportsSecureCoding;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif