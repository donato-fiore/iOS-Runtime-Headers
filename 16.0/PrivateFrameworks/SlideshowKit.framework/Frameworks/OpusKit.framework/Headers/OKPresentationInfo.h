// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKPRESENTATIONINFO_H
#define OKPRESENTATIONINFO_H

@class NSRecursiveLock, UIColor, NSDate, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "OKPresentation.h"

@interface OKPresentationInfo : NSObject {
    NSRecursiveLock *_infoLock;
    UIColor *backgroundColor;
}


@property CGFloat apiVersion; // ivar: _apiVersion
@property (retain) UIColor *backgroundColor; // ivar: _backgroundColor
@property CGFloat couchPotatoDelay; // ivar: _couchPotatoDelay
@property CGFloat couchPotatoStepDuration; // ivar: _couchPotatoStepDuration
@property BOOL couchPotatoSupported; // ivar: _couchPotatoSupported
@property (copy) NSDate *creationDate; // ivar: _creationDate
@property NSUInteger format; // ivar: _format
@property NSUInteger formatVersion; // ivar: _formatVersion
@property (copy) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (copy) NSString *mainFeederName; // ivar: _mainFeederName
@property (copy) NSString *mainNavigatorName; // ivar: _mainNavigatorName
@property BOOL motionSupported; // ivar: _motionSupported
@property BOOL overviewSupported; // ivar: _overviewSupported
@property (nonatomic) OKPresentation *presentation; // ivar: _presentation
@property (copy) NSString *producerIdentifier; // ivar: _producerIdentifier
@property CGFloat producerVersion; // ivar: _producerVersion
@property BOOL renderTimeLoggingSupported; // ivar: _renderTimeLoggingSupported
@property BOOL requiresProducer; // ivar: _requiresProducer
@property (copy) NSArray *resolutions; // ivar: _resolutions
@property (copy) NSString *trailerNavigatorName; // ivar: _trailerNavigatorName
@property BOOL trailerSupported; // ivar: _trailerSupported
@property (copy) NSString *uuid; // ivar: _uuid
@property (copy) NSString *versionID; // ivar: _versionID
@property BOOL wheelControllerSupported; // ivar: _wheelControllerSupported


-(id)dictionary;
-(id)init;
-(void)dealloc;
-(void)importFromDictionary:(id)arg0 ;
-(void)lock;
-(void)reset;
-(void)unlock;


@end


#endif