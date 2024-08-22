// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CHRONOCORE21LOCATIONGRACEREGISTRY_H
#define _TTC10CHRONOCORE21LOCATIONGRACEREGISTRY_H

@class SwiftObject;
@protocol BSSharedMemoryStoreData;



@interface _TtC10ChronoCore21LocationGraceRegistry : SwiftObject <BSSharedMemoryStoreData>

 {
    ? timeoutByIdentifier;
}


@property (nonatomic, readonly) NSInteger serializedDataLength;


+(id)deserializeFromReader:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)serializeToWriter:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;


@end


#endif