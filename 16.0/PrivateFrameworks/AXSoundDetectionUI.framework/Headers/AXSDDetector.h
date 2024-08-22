// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSDDETECTOR_H
#define AXSDDETECTOR_H

@class NSString, AXAsset, NSURL;

#import <Foundation/Foundation.h>


@interface AXSDDetector : NSObject {
    NSString *_modelName;
    AXAsset *_model;
    BOOL _enabled;
}


@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSUInteger compatibilityVersion;
@property (readonly, nonatomic) NSUInteger contentVersion;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCompatiable;
@property (readonly, nonatomic) BOOL isCustom;
@property (readonly, nonatomic) BOOL isDownloading;
@property (nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isInstalled;
@property (readonly, nonatomic) BOOL isUsingSoundPrint;
@property (nonatomic) BOOL modelFailed;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelURLString;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate


-(BOOL)isOlderThanDetector:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;
-(id)model;
-(id)properties;


@end


#endif