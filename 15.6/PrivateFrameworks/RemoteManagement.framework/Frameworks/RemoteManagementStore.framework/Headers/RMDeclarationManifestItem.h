// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMDECLARATIONMANIFESTITEM_H
#define RMDECLARATIONMANIFESTITEM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RMDeclarationManifestItem : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToManifestItem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 version:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif