// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INMEDIADESTINATION_H
#define INMEDIADESTINATION_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INMediaDestination : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mediaDestinationType; // ivar: _mediaDestinationType
@property (readonly, copy, nonatomic) NSString *playlistName; // ivar: _playlistName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
+(id)libraryDestination;
+(id)playlistDestinationWithName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaDestinationType:(NSInteger)arg0 playlistName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif