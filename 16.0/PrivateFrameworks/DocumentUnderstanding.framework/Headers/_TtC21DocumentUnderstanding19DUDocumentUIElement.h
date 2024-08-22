// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC21DOCUMENTUNDERSTANDING19DUDOCUMENTUIELEMENT_H
#define _TTC21DOCUMENTUNDERSTANDING19DUDOCUMENTUIELEMENT_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding19DUDocumentUIElement : NSObject <NSSecureCoding, NSCopying>

 {
    ? text;
    ? version;
    ? classDescriptor;
    ? superviewClassNames;
}


@property (nonatomic) CGPoint absoluteOriginOnScreen; // ivar: absoluteOriginOnScreen
@property (nonatomic, copy) NSString *classDescriptor;
@property (nonatomic) float fontSize; // ivar: fontSize
@property (nonatomic) CGRect frameInWindow; // ivar: frameInWindow
@property (nonatomic) BOOL isOnScreen; // ivar: isOnScreen
@property (nonatomic) BOOL isValidForContentExtraction; // ivar: isValidForContentExtraction
@property (nonatomic, copy) NSArray *superviewClassNames;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *version;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif