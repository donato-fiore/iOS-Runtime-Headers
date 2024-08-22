// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFOBJECTTYPE_H
#define WFOBJECTTYPE_H

@class WFType, NSBundle, NSString;



@interface WFObjectType : WFType

@property (readonly, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) NSString *className; // ivar: _className
@property (readonly, nonatomic) Class objectClass; // ivar: _objectClass
@property (readonly, copy, nonatomic) NSString *string;


+(BOOL)supportsSecureCoding;
+(id)typeWithClass:(Class)arg0 ;
+(id)typeWithClassName:(id)arg0 frameworkName:(id)arg1 location:(NSUInteger)arg2 ;
+(id)typesWithClasses:(id)arg0 ;
-(BOOL)conformsToClass:(Class)arg0 ;
-(BOOL)conformsToType:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClass:(Class)arg0 ;
-(BOOL)isEqualToType:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithClassName:(id)arg0 inBundle:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectClass:(Class)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif