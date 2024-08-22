// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ML3ARTWORKCONFIGURATIONMEDIAARTWORKTYPEKEY_H
#define _ML3ARTWORKCONFIGURATIONMEDIAARTWORKTYPEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _ML3ArtworkConfigurationMediaArtworkTypeKey : NSObject <NSCopying>

 {
    unsigned int _mediaType;
    NSInteger _artworkType;
}




+(id)keyWithMediaType:(unsigned int)arg0 artworkType:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif