// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUARCHITECTURE_H
#define VMUARCHITECTURE_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface VMUArchitecture : NSObject <NSCoding, NSCopying>

 {
    int _cpuType;
    int _cpuSubtype;
}




+(id)anyArchitecture;
+(id)architectureWithCpuType:(int)arg0 cpuSubtype:(int)arg1 ;
+(id)armArchitecture;
+(id)currentArchitecture;
+(id)i386Architecture;
+(id)ppc32Architecture;
+(id)ppc64Architecture;
+(id)ppcArchitecture;
+(id)x86_32Architecture;
+(id)x86_64Architecture;
+(void)initialize;
-(BOOL)is32Bit;
-(BOOL)is64Bit;
-(BOOL)isBigEndian;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArchitecture:(id)arg0 ;
-(BOOL)isLittleEndian;
-(BOOL)matchesArchitecture:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCpuType:(int)arg0 cpuSubtype:(int)arg1 ;
-(int)cpuSubtype;
-(int)cpuType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif