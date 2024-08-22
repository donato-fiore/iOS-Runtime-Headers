// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMULTIPARTATTRIBUTEDSTRING_H
#define MKMULTIPARTATTRIBUTEDSTRING_H

@class NSAttributedString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MKMultiPartAttributedString : NSObject <NSCopying>



@property (readonly, nonatomic) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly, copy, nonatomic) NSArray *components; // ivar: _components
@property (readonly, copy, nonatomic) NSArray *separators; // ivar: _separators


+(id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg0 defaultAttributes:(id)arg1 ;
+(id)_mapkit_multiPartAttributedStringForServerFormattedStrings:(id)arg0 defaultAttributes:(id)arg1 repeatedSeparator:(id)arg2 ;
+(id)multiPartAttributedStringWithComponents:(id)arg0 repeatedSeparator:(id)arg1 ;
+(id)multiPartAttributedStringWithString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithComponents:(id)arg0 separators:(id)arg1 ;


@end


#endif