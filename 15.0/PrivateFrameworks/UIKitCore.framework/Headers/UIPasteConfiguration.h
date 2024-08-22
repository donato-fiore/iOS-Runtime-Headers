// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPASTECONFIGURATION_H
#define UIPASTECONFIGURATION_H

@class NSMutableOrderedSet, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UIPasteConfiguration : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableOrderedSet *_acceptableTypes;
}


@property (copy, nonatomic) NSArray *acceptableTypeIdentifiers;
@property (copy, nonatomic) NSArray *acceptableTypes;


+(BOOL)supportsSecureCoding;
+(id)_pasteConfigurationForAcceptingClasses:(id)arg0 ;
+(id)pasteConfigurationForAcceptingClasses:(id)arg0 ;
+(id)pasteConfigurationWithAcceptableTypes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAcceptableTypeIdentifiers:(id)arg0 ;
-(id)initWithAcceptableTypes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypeIdentifiersForAcceptingClass:(Class)arg0 ;
-(void)addAcceptableTypeIdentifiers:(id)arg0 ;
-(void)addTypeIdentifiersForAcceptingClass:(Class)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif