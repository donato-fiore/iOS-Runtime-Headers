// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSSIGNALPACK_H
#define MAPSSUGGESTIONSSIGNALPACK_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    SignalPack _innerSignalPack;
}




+(BOOL)supportsSecureCoding;
+(id)extractFromDestinationEntry:(id)arg0 originCoordinate:(struct CLLocationCoordinate2D )arg1 ;
+(id)extractFromDestinationMapItem:(id)arg0 originCoordinate:(struct CLLocationCoordinate2D )arg1 ;
+(id)signalPackFromData:(id)arg0 ;
-(BOOL)hasType:(NSInteger)arg0 ;
-(BOOL)isEmpty;
-(BOOL)mergeIntoSignalPack:(id)arg0 ;
-(NSUInteger)count;
-(float)valueForSignalType:(NSInteger)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)encodedFeatureDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignalPack:(id)arg0 ;
-(id)mutableCopy;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif