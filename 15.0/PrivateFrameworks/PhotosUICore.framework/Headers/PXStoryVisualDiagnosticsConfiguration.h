// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYVISUALDIAGNOSTICSCONFIGURATION_H
#define PXSTORYVISUALDIAGNOSTICSCONFIGURATION_H

@class NSString;
@protocol NSCopying, PXStoryVisualDiagnosticsProvider;

#import <Foundation/Foundation.h>


@interface PXStoryVisualDiagnosticsConfiguration : NSObject <NSCopying>



@property (nonatomic) CGSize defaultPageSize; // ivar: _defaultPageSize
@property (nonatomic) BOOL isPrivateDataAllowed; // ivar: _isPrivateDataAllowed
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<PXStoryVisualDiagnosticsProvider> *rootProvider; // ivar: _rootProvider


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRootProvider:(id)arg0 ;


@end


#endif