// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSITEMARTWORKIMAGE_H
#define SSITEMARTWORKIMAGE_H

@class NSMutableDictionary, NSURL, NSString;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying>

 {
    NSMutableDictionary *_dictionary;
}


@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *URLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger height;
@property (copy, nonatomic) NSString *imageKind; // ivar: _imageKind
@property (readonly, nonatomic) NSInteger imageOrientation;
@property (readonly, nonatomic) CGFloat imageScale;
@property (readonly, nonatomic) CGSize imageSize;
@property (readonly, nonatomic, getter=isPrerendered) BOOL prerendered;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger width;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithArtworkDictionary:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_setValue:(id)arg0 forKey:(id)arg1 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ;


@end


#endif