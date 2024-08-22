// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMSTRUCTUREDLOCATION_CODABLE_H
#define REMSTRUCTUREDLOCATION_CODABLE_H

@class REMStructuredLocation;



@interface REMStructuredLocation_Codable : REMStructuredLocation



-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 locationUID:(id)arg1 ;
-(id)initWithTitle:(id)arg0 locationUID:(id)arg1 latitude:(CGFloat)arg2 longitude:(CGFloat)arg3 radius:(CGFloat)arg4 address:(id)arg5 routing:(id)arg6 referenceFrameString:(id)arg7 contactLabel:(id)arg8 mapKitHandle:(id)arg9 ;


@end


#endif