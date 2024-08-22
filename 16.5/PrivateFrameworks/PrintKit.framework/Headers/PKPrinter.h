// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPRINTER_H
#define PKPRINTER_H

@class NSDictionary, NSMutableDictionary, NSArray, NSString, NSUUID, NSNumber, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaperList.h"

@interface PKPrinter : NSObject <NSSecureCoding>

 {
    NSDictionary *printInfoSupported;
    *_http_s job_http;
    NSMutableDictionary *privateData;
    NSMutableDictionary *specialFeedOrientation;
    NSArray *printScalingSupported;
    NSArray *mandatoryJobAttributes;
    NSString *quotaManagementURL;
    int maxPDFKBytes;
    int maxJPEGKBytes;
    int maxJPEGXDimension;
    int maxJPEGYDimension;
    int maxCopies;
    int maxDocumentPasswordLength;
    int preferred_landscape;
    int printerStateReasons;
    int recentRssiValues;
    BOOL connectionShouldNotBeTrusted;
    NSInteger identifyActionsSupported;
}


@property (retain) NSDictionary *TXTRecord;
@property (readonly) BOOL _isAlwaysAvailable;
@property NSInteger accessState;
@property (readonly) NSInteger accessState; // ivar: accessState
@property NSInteger btleMeasuredPower; // ivar: btleMeasuredPower
@property (retain) NSUUID *btleUUID; // ivar: btleUUID
@property (readonly) BOOL hasIdentifyPrinterOp; // ivar: hasIdentifyPrinterOp
@property (readonly) BOOL hasPrintInfoSupported;
@property (retain) NSString *hostname;
@property (readonly) NSInteger identifyActionsSupported;
@property (readonly) BOOL isAdobeRGBSupported;
@property BOOL isFromMCProfile; // ivar: isFromMCProfile
@property (readonly) BOOL isIPPS;
@property BOOL isLocal; // ivar: isLocal
@property NSInteger jobAccountIDSupport; // ivar: _jobAccountIDSupport
@property (readonly) NSInteger jobTypesSupported;
@property (retain) NSArray *jpegFeaturesSupported; // ivar: _jpegFeaturesSupported
@property (readonly) NSInteger kind; // ivar: kind
@property (readonly) NSArray *localizedNamesOfEmptyTrays;
@property (retain) NSString *name; // ivar: name
@property (readonly) BOOL needsSetup;
@property (retain) PKPaperList *paperList; // ivar: _paperList
@property (retain) NSNumber *port;
@property (readonly) NSDictionary *printInfoSupported;
@property (readonly) NSURL *printerURL;
@property NSInteger proximity; // ivar: proximity
@property (readonly, retain) NSString *scheme;
@property (readonly) BOOL setupSupportsPasswordScope;
@property (retain) NSDictionary *translations; // ivar: _translations
@property (retain) NSArray *trays; // ivar: _trays
@property (readonly) NSInteger type; // ivar: type
@property (readonly) NSString *uuid;


+(BOOL)ippsIsRequired;
+(BOOL)mcProfilePrintersOnlyAllowed;
+(BOOL)printerLookupWithName:(id)arg0 andTimeout:(CGFloat)arg1 ;
+(BOOL)urfIsOptional;
+(BOOL)uriMatchesMCProfileAdded:(id)arg0 ;
+(id)_ipp_to_data:(struct _ipp_s *)arg0 ;
+(id)defaultPrinter;
+(id)hardcodedURIs;
+(id)nameForHardcodedURI:(id)arg0 ;
+(id)printerWithName:(id)arg0 ;
+(id)printerWithName:(id)arg0 discoveryTimeout:(CGFloat)arg1 ;
+(id)requiredPDL;
+(struct _ipp_s *)_data_to_ipp:(id)arg0 ;
+(struct _ipp_s *)getAttributes:(*char *)arg0 count:(int)arg1 fromURI:(id)arg2 ;
+(struct http_addrlist_s *)_createAddrList:(char *)arg0 hostName:(char *)arg1 port:(int)arg2 ;
+(void)listenForPrinterNotifications;
-(BOOL)isBonjour;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPaperReady:(id)arg0 ;
-(BOOL)knowsReadyPaperList;
-(BOOL)resolve;
-(BOOL)resolveIfNeeded;
-(BOOL)resolveWithTimeout:(int)arg0 ;
-(NSInteger)abortJob;
-(NSInteger)feedOrientation:(id)arg0 ;
-(NSInteger)finalizeJob:(int)arg0 ;
-(NSInteger)finishJob;
-(NSInteger)printURL:(id)arg0 ofType:(id)arg1 printSettings:(id)arg2 ;
-(NSInteger)sendData:(char *)arg0 ofLength:(NSInteger)arg1 ;
-(NSInteger)startJob:(id)arg0 ofType:(id)arg1 ;
-(id)TXTRecordWithTimeout:(int)arg0 ;
-(id)availableRollPapersPreferBorderless:(BOOL)arg0 ;
-(id)description;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 TXT:(id)arg1 ;
-(id)initWithName:(id)arg0 TXTRecord:(id)arg1 ;
-(id)loadTranslations;
-(id)localName;
-(id)localizedPrinterWarnings;
-(id)location;
-(id)makeAndModel;
-(id)matchedPaper:(id)arg0 preferBorderless:(BOOL)arg1 withDuplexMode:(id)arg2 didMatch:(*BOOL)arg3 ;
-(id)paperListForDuplexMode:(id)arg0 ;
-(id)papersForDocumentWithSize:(struct CGSize )arg0 andDuplex:(BOOL)arg1 ;
-(id)papersForDocumentWithSize:(struct CGSize )arg0 scaleUpOnRoll:(BOOL)arg1 andDuplex:(BOOL)arg2 ;
-(id)papersForPhotoWithSize:(struct CGSize )arg0 ;
-(id)printInfoSupported:(struct _ipp_s *)arg0 ;
-(id)privateObjectForKey:(id)arg0 ;
-(id)rollReadyPaperListWithContentSize:(struct CGSize )arg0 ;
-(id)rollReadyPaperListWithContentSize:(struct CGSize )arg0 forPhoto:(BOOL)arg1 ;
-(id)txtRecordObjectForKey:(id)arg0 ;
-(struct _ipp_s *)createRequest:(id)arg0 ofType:(id)arg1 url:(id)arg2 ;
-(struct _ipp_s *)getAttributes:(*char *)arg0 count:(int)arg1 ;
-(struct _ipp_s *)getPrinterAttributes;
-(struct _ipp_s *)getSupplyLevelAttributes;
-(struct _pk_proxy_s *)_httpConnectViaSelfHost:(int)arg0 msTimeout:(int)arg1 ;
-(void)_checkAvailable:(CGFloat)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)abortJobCompletionHandler:(id)arg0 ;
-(void)addRSSIValue:(id)arg0 ;
-(void)cancelUnlock;
-(void)checkOperations:(struct _ipp_s *)arg0 ;
-(void)dealloc;
-(void)doMedia2:(struct _ipp_s *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeJob:(int)arg0 completionHandler:(id)arg1 ;
-(void)finishJobCompletionHandler:(id)arg0 ;
-(void)getSupplyLevels:(id)arg0 ;
-(void)handlePrinterStateReasonsFromResponse:(struct _ipp_s *)arg0 ;
-(void)identifySelf;
-(void)pollForPrinterStatusQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)printURL:(id)arg0 ofType:(id)arg1 printSettings:(id)arg2 completionHandler:(id)arg3 ;
-(void)reconfirmWithForce:(BOOL)arg0 ;
-(void)removeCredentialsFromKeychain;
-(void)setPrivateObject:(id)arg0 forKey:(id)arg1 ;
-(void)setupWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)showPassCodeForSetupWithCompletionHandler:(id)arg0 ;
-(void)unlockWithCompletionHandler:(id)arg0 ;
-(void)updateType;
-(void)validatePassCode:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif