// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXVISUALDIAGNOSTICSCONFIGURATION_H
#define PXVISUALDIAGNOSTICSCONFIGURATION_H

@class NSString;
@protocol PXTapToRadarDiagnosticProvider, NSCopying, PXVisualDiagnosticsProvider;

#import <Foundation/Foundation.h>


@interface PXVisualDiagnosticsConfiguration : NSObject <PXTapToRadarDiagnosticProvider, NSCopying>



@property (nonatomic) CGSize defaultPageSize; // ivar: _defaultPageSize
@property (nonatomic) BOOL isPrivateDataAllowed; // ivar: _isPrivateDataAllowed
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<PXVisualDiagnosticsProvider> *rootProvider; // ivar: _rootProvider


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRootProvider:(id)arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;


@end


#endif