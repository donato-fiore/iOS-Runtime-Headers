// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCAMERAREADER_H
#define CRCAMERAREADER_H

@class UIViewController, UIActivityIndicatorView, NSString, NSPointerArray, UIColor, NSMutableArray, NSMutableDictionary, NSDate, NSDictionary, NSArray, CRImageReader, CATextLayer, NSCache, UITapGestureRecognizer;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, CALayerDelegate, CRCameraReaderDelegate, OS_dispatch_queue, OS_dispatch_semaphore, CRCaptureSessionManager;


#import "CRAlignmentLayer.h"
#import "CRBoxLayer.h"
#import "CRPollingTimer.h"
#import "DiagnosticHUDLayer.h"
#import "CRMLCCModel.h"

@interface CRCameraReader : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, CALayerDelegate>



@property (retain) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain) CRAlignmentLayer *alignmentLayer; // ivar: _alignmentLayer
@property float borderPaddingIDCard; // ivar: _borderPaddingIDCard
@property (retain) CRBoxLayer *boxLayer; // ivar: _boxLayer
@property (retain) CRPollingTimer *boxLayerHideTimer; // ivar: _boxLayerHideTimer
@property (weak) NSObject<CRCameraReaderDelegate> *callbackDelegate; // ivar: _callbackDelegate
@property (copy) NSString *cameraMode; // ivar: _cameraMode
@property NSInteger cameraPosition; // ivar: _cameraPosition
@property (retain) NSPointerArray *captureBuffer; // ivar: _captureBuffer
@property NSUInteger captureCount; // ivar: _captureCount
@property (getter=isCaptureMode) BOOL captureMode; // ivar: _captureMode
@property (copy, nonatomic) UIColor *capturedTextColor; // ivar: _capturedTextColor
@property (retain) NSMutableArray *cardBlurValues; // ivar: _cardBlurValues
@property (retain) NSMutableDictionary *cardNumberCounts; // ivar: _cardNumberCounts
@property (retain) NSMutableDictionary *cardholderCounts; // ivar: _cardholderCounts
@property BOOL codeInverted; // ivar: _codeInverted
@property (retain) NSDate *codePresented; // ivar: _codePresented
@property CGFloat configDemoSpeed; // ivar: _configDemoSpeed
@property BOOL configPresentCentered; // ivar: _configPresentCentered
@property BOOL configUseFastScanning; // ivar: _configUseFastScanning
@property BOOL configUseJPEGForColor; // ivar: _configUseJPEGForColor
@property (retain) NSDictionary *contactsCache; // ivar: _contactsCache
@property BOOL continousMode; // ivar: _continousMode
@property *__CVBuffer correctedCardBuffer; // ivar: _correctedCardBuffer
@property (readonly) NSInteger currentCameraIdentifier;
@property (retain) NSMutableArray *dateCutRects; // ivar: _dateCutRects
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain) DiagnosticHUDLayer *diagnosticHUDLayer; // ivar: _diagnosticHUDLayer
@property BOOL didSendEndOrCancel; // ivar: _didSendEndOrCancel
@property BOOL didSendFindBox; // ivar: _didSendFindBox
@property (retain) CRMLCCModel *embossedCardholderModel; // ivar: _embossedCardholderModel
@property (retain) CRMLCCModel *embossedExpirationModel; // ivar: _embossedExpirationModel
@property (retain) CRMLCCModel *embossedNumberModel; // ivar: _embossedNumberModel
@property BOOL enableAltIDCardScan; // ivar: _enableAltIDCardScan
@property (retain) NSMutableDictionary *expirationDateCounts; // ivar: _expirationDateCounts
@property NSInteger exposureMode; // ivar: _exposureMode
@property (retain) CRMLCCModel *flatPrintedModel; // ivar: _flatPrintedModel
@property NSInteger focusMode; // ivar: _focusMode
@property (retain) NSString *foundCode; // ivar: _foundCode
@property (retain) NSArray *foundPoints; // ivar: _foundPoints
@property (readonly) NSUInteger hash;
@property BOOL hidePlacementText; // ivar: _hidePlacementText
@property NSUInteger imagesToCapture; // ivar: _imagesToCapture
@property BOOL isQRCode; // ivar: _isQRCode
@property *opaqueCMSampleBuffer lastBuffer; // ivar: _lastBuffer
@property ? lastFieldFoundTime; // ivar: _lastFieldFoundTime
@property ? lastSendFindBox; // ivar: _lastSendFindBox
@property (copy, nonatomic) UIColor *maskColor; // ivar: _maskColor
@property (copy, nonatomic) UIColor *maskOutlineColor; // ivar: _maskOutlineColor
@property (retain) NSMutableArray *nameCutRects; // ivar: _nameCutRects
@property (retain, nonatomic) CRImageReader *ocrImageReader; // ivar: _ocrImageReader
@property float ocrOverlayBackgroundOpacity; // ivar: _ocrOverlayBackgroundOpacity
@property (retain) NSString *ocrOverlayFontName; // ivar: _ocrOverlayFontName
@property (retain, nonatomic) NSMutableDictionary *optionsDictionary; // ivar: _optionsDictionary
@property (copy) NSArray *outputObjectTypes; // ivar: _outputObjectTypes
@property (retain, nonatomic) CATextLayer *overlayTextLayer; // ivar: _overlayTextLayer
@property (retain) NSMutableDictionary *pinnedFoundInfo; // ivar: _pinnedFoundInfo
@property (copy, nonatomic) UIColor *placementTextColor; // ivar: _placementTextColor
@property ? pointsFound; // ivar: _pointsFound
@property (retain) NSString *previousCode; // ivar: _previousCode
@property (retain) NSCache *previousContactMatches; // ivar: _previousContactMatches
@property BOOL previousIdleState; // ivar: _previousIdleState
@property (retain) NSObject<OS_dispatch_semaphore> *processingImage; // ivar: _processingImage
@property (retain) NSObject<OS_dispatch_queue> *processingQueue; // ivar: _processingQueue
@property BOOL sessionIsStopping; // ivar: _sessionIsStopping
@property (retain) NSObject<CRCaptureSessionManager> *sessionManager; // ivar: _sessionManager
@property ? sessionStarted; // ivar: _sessionStarted
@property CGFloat sessionTimeout; // ivar: _sessionTimeout
@property BOOL showDiagnosticHUD; // ivar: _showDiagnosticHUD
@property (readonly) Class superclass;
@property (retain) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) NSMutableArray *textDetectorRTFeedback; // ivar: _textDetectorRTFeedback
@property NSInteger torchMode; // ivar: _torchMode
@property NSInteger whiteBalanceMode; // ivar: _whiteBalanceMode


+(NSUInteger)supportedCameraCount;
+(NSUInteger)supportedCameraCountForTypes:(id)arg0 ;
+(id)extractCardImage:(id)arg0 fromPixelBuffer:(struct __CVBuffer *)arg1 withCardBuffer:(struct __CVBuffer *)arg2 cameraIntrinsicData:(id)arg3 ;
+(id)extractCardImage:(id)arg0 fromPixelBuffer:(struct __CVBuffer *)arg1 withCardBuffer:(struct __CVBuffer *)arg2 withPoints:(id)arg3 cameraIntrinsicData:(id)arg4 ;
+(id)extractCardImage:(id)arg0 fromPixelBuffer:(struct __CVBuffer *)arg1 withCardBuffer:(struct __CVBuffer *)arg2 withPoints:(id)arg3 cameraIntrinsicData:(id)arg4 padding:(float)arg5 inputOrientation:(int)arg6 ;
+(id)findCodeInImage:(struct vImage_Buffer )arg0 maxStage:(NSUInteger)arg1 ;
+(id)findCodeInImage:(struct vImage_Buffer )arg0 maxStage:(NSUInteger)arg1 outputObjectTypes:(id)arg2 ;
+(id)findCodeInImage:(struct vImage_Buffer )arg0 maxStage:(NSUInteger)arg1 roi:(struct CGRect )arg2 ;
+(id)findCodeInImage:(struct vImage_Buffer )arg0 maxStage:(NSUInteger)arg1 roi:(struct CGRect )arg2 outputObjectTypes:(id)arg3 ;
+(id)targetRectsForImage:(id)arg0 ;
+(id)textFeatureWithVNTextObservation:(id)arg0 ;
+(struct CGRect )aspectRatioPaddedRect:(struct CGRect )arg0 expectedWidth:(CGFloat)arg1 height:(CGFloat)arg2 orientation:(unsigned int)arg3 ;
+(struct CGRect )uniformPadRect:(struct CGRect )arg0 widthPadding:(float)arg1 heightPadding:(float)arg2 width:(CGFloat)arg3 height:(CGFloat)arg4 ;
+(void)loadFonts;
-(NSUInteger)getFirstTimeFrameIndexForPinnedField:(id)arg0 ;
-(id)attributedStringWithFrame:(struct CGSize )arg0 withFont:(id)arg1 withString:(id)arg2 color:(struct CGColor *)arg3 ;
-(id)cameraIntrinsicDataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(id)createTextLayerForRecognizedObject:(id)arg0 ;
-(id)currentDeviceID;
-(id)extractFinalDigitStringFromNumbers:(id)arg0 ;
-(id)findCCExpDateInImageEmbossed:(id)arg0 ;
-(id)findCCNameInImageEmbossed:(id)arg0 ;
-(id)findCCNumberInImageEmbossed:(id)arg0 ;
-(id)findCCNumberInImageEmbossed:(id)arg0 withFinalDigit:(id)arg1 ;
-(id)findCCObjectEmbossed:(id)arg0 inImage:(id)arg1 forRect:(id)arg2 ;
-(id)findCCObjectsEmbossed:(id)arg0 inImage:(id)arg1 numberRects:(id)arg2 nameRects:(id)arg3 dateRects:(id)arg4 ;
-(id)findCCResultsInImageFlat:(id)arg0 usingTextFeatures:(id)arg1 invert:(BOOL)arg2 ;
-(id)findObjects:(id)arg0 inImage:(id)arg1 properties:(id)arg2 ;
-(id)findObjectsEmbossed:(id)arg0 inImage:(id)arg1 ;
-(id)findObjectsFlat:(id)arg0 inImage:(id)arg1 numberRects:(id)arg2 invert:(BOOL)arg3 ;
-(id)generateStringFromDate:(id)arg0 ;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 options:(id)arg2 ;
-(id)initWithOptions:(id)arg0 ;
-(struct __CVBuffer *)createFastAccessPixelBufferWithSize:(struct CGSize )arg0 videoFormat:(int)arg1 ;
-(void)aetPlacementTextColor:(id)arg0 ;
-(void)animatePresentCodeAtFrameTime:(struct ? )arg0 ;
-(void)cancel;
-(void)captureImage;
-(void)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2 ;
-(void)captureOutput:(id)arg0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2 ;
-(void)createCorrectedCardBuffer;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)findCodeInSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)findIDObjects:(id)arg0 inPixelBuffer:(struct __CVBuffer *)arg1 cameraIntrinsicData:(id)arg2 frameTime:(struct ? )arg3 ;
-(void)findOCRTextObjects:(id)arg0 inPixelBuffer:(struct __CVBuffer *)arg1 attachments:(id)arg2 frameTime:(struct ? )arg3 ;
-(void)findObjects:(id)arg0 inPixelBuffer:(struct __CVBuffer *)arg1 cameraIntrinsicData:(id)arg2 frameTime:(struct ? )arg3 ;
-(void)flashScreenAndPlayCaptureSound;
-(void)handleTapFrom:(id)arg0 ;
-(void)hideBoxLayer;
-(void)loadModels;
-(void)loadView;
-(void)mergeInfo:(id)arg0 intoFindInfo:(id)arg1 ;
-(void)orientationDidChange:(id)arg0 ;
-(void)pauseBoxLayerHideTimer;
-(void)primeBoxLayerHideTimerWithFrameTime:(struct ? )arg0 ;
-(void)releaseCorrectedCardBuffer;
-(void)removeLayerTree;
-(void)reportAcceptedString:(id)arg0 forOutput:(id)arg1 withClientID:(id)arg2 ;
-(void)sendDidCancel;
-(void)sendDidDisplayMessageStyle:(NSInteger)arg0 ;
-(void)sendDidEndAnimation;
-(void)sendDidEndWithError:(id)arg0 ;
-(void)sendDidEndWithErrorDomain:(id)arg0 code:(NSInteger)arg1 userInfo:(id)arg2 ;
-(void)sendDidEndWithInfo:(id)arg0 ;
-(void)sendDidFindTarget:(id)arg0 frameTime:(struct ? )arg1 ;
-(void)sendDidRecognizeNewObjects:(id)arg0 ;
-(void)sendProvideOverlayObjects:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setFirstTimeFrameIndexForPinnedField:(id)arg0 ;
-(void)setupInitialLayerConfiguration;
-(void)showMessage:(id)arg0 color:(id)arg1 style:(NSInteger)arg2 duration:(CGFloat)arg3 ;
-(void)showTextDetectorObjects:(id)arg0 ;
-(void)start;
-(void)startSession;
-(void)stopSession;
-(void)switchToCamera:(NSInteger)arg0 ;
-(void)switchToCameraWithDeviceID:(id)arg0 ;
-(void)toggleCamera;
-(void)updateContactsCache:(id)arg0 ;
-(void)updatePinnedInfoFrameIndex;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif