// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSCENECLASSIFICATION_H
#define CSSCENECLASSIFICATION_H

@class NSString, NSArray;
@protocol CSCoderEncoder, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CSSceneClassification : NSObject <CSCoderEncoder, NSSecureCoding, NSCopying>



@property CGRect boundingBox; // ivar: _boundingBox
@property CGFloat confidence; // ivar: _confidence
@property (copy) NSString *label; // ivar: _label
@property unsigned int sceneIdentifier; // ivar: _sceneIdentifier
@property (copy) NSArray *synonyms; // ivar: _synonyms


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(id)arg0 synonyms:(id)arg1 confidence:(CGFloat)arg2 sceneIdentifier:(unsigned int)arg3 ;
-(void)encodeWithCSCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif