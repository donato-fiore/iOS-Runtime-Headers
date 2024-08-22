// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYLOCATION_H
#define PFUBIQUITYLOCATION_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface PFUbiquityLocation : NSObject <NSCopying>

 {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
    int _ubiquityLocationType;
    NSString *_exportingPeerID;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSString *_filename;
    NSArray *_otherPathComponents;
    BOOL _isDirectory;
    BOOL _isRootUbiquitous;
}


@property (readonly, nonatomic) NSUInteger hash; // ivar: _hash


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToURL:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setExportingPeerID:(id)arg0 ;
-(void)setFilename:(id)arg0 ;
-(void)setIsRootUbiquitous:(BOOL)arg0 ;
-(void)setModelVersionHash:(id)arg0 ;
-(void)setOtherPathComponents:(id)arg0 ;
-(void)setStoreName:(id)arg0 ;
-(void)setUbiquityLocationType:(int)arg0 ;
-(void)setUbiquityRootLocation:(id)arg0 ;
-(void)setUbiquityRootLocationPath:(id)arg0 ;


@end


#endif