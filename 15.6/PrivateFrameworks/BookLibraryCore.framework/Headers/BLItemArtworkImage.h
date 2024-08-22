// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLITEMARTWORKIMAGE_H
#define BLITEMARTWORKIMAGE_H

@class NSMutableDictionary, NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BLItemArtworkImage : NSObject <NSCopying>

 {
    NSMutableDictionary *_dictionary;
}


@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *imageKind; // ivar: _imageKind
@property (readonly, nonatomic) CGFloat imageScale;
@property (readonly, nonatomic) CGSize imageSize;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)height;
-(NSInteger)width;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArtworkDictionary:(id)arg0 ;
-(id)valueForProperty:(id)arg0 ;
-(void)_setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forProperty:(id)arg1 ;


@end


#endif