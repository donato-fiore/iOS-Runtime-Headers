// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVPROPERTYLIST_H
#define UVPROPERTYLIST_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface UVPropertyList : NSObject <NSSecureCoding, BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(id)_initWithAnyCoder:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_encodeWithAnyCoder:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif