// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPHEYSIRIMODEL_H
#define UARPHEYSIRIMODEL_H

@class NSURL, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface UARPHeySiriModel : NSObject {
    NSURL *_url;
    NSMutableArray *_newModels;
    NSMutableArray *_fallbackModels;
    NSMutableArray *_downloadedModels;
    NSMutableArray *_preInstalledModels;
}


@property (readonly, copy) NSArray *downloadedModels;
@property (readonly) NSUInteger engineType; // ivar: _engineType
@property (readonly, copy) NSArray *fallbackModels;
@property (readonly) NSUInteger majorVersion; // ivar: _majorVersion
@property (readonly) NSUInteger minorVersion; // ivar: _minorVersion
@property (readonly, copy) NSArray *newModels;
@property (readonly, copy) NSArray *preInstalledModels;


+(id)hsModelWithUarpPayload:(id)arg0 ;
+(id)uarpPayloadWithHSModel:(id)arg0 ;
-(BOOL)expandURL:(*id)arg0 ;
-(id)exportAsSuperBinary:(*id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)addHeySiriDownloadedModel:(id)arg0 ;
-(void)addHeySiriFallbackModel:(id)arg0 ;
-(void)addHeySiriPreinstalledModel:(id)arg0 ;
-(void)addHeySiriPrimaryModel:(id)arg0 ;
-(void)expandSuperBinaryMetaData:(id)arg0 ;
-(void)expandSuperBinaryPayloads:(id)arg0 ;


@end


#endif