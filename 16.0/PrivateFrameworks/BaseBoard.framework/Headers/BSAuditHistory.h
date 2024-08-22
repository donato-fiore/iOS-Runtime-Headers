// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSAUDITHISTORY_H
#define BSAUDITHISTORY_H

@class NSMutableArray, NSString, NSArray;
@protocol BSXPCCoding, NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSAuditHistory : NSObject <BSXPCCoding, NSSecureCoding, BSDescriptionProviding>

 {
    NSMutableArray *_items;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasItems;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addItem:(id)arg0 ;
-(void)addItemWithFormat:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif