// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPPLAYBACKARCHIVEDISPLAYPROPERTIES_H
#define MPPLAYBACKARCHIVEDISPLAYPROPERTIES_H

@class NSData, NSString, NSMutableDictionary;
@protocol MPMutablePlaybackArchiveDisplayProperties, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPPlaybackArchiveDisplayProperties : NSObject <MPMutablePlaybackArchiveDisplayProperties, NSCopying, NSSecureCoding>

 {
    BOOL _final;
}


@property (readonly, copy, nonatomic) NSData *artworkImageData; // ivar: _artworkImageData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *storage; // ivar: _storage
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithOptions:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 artworkImageData:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif