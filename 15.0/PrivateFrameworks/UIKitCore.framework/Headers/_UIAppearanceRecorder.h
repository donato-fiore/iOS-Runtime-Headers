// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIAPPEARANCERECORDER_H
#define _UIAPPEARANCERECORDER_H

@class NSMutableArray, NSArray, NSString, NSData;

#import <Foundation/Foundation.h>


@interface _UIAppearanceRecorder : NSObject {
    NSMutableArray *_customizations;
    NSArray *_unarchivedCustomizations;
}


@property (copy, nonatomic, setter=_setClassNameToRecord:) NSString *_classNameToRecord; // ivar: _classNameToRecord
@property (copy, nonatomic, setter=_setContainerClassNames:) NSArray *_containerClassNames; // ivar: _containerClassNames
@property (readonly, nonatomic) NSData *_serializedRepresentation;
@property (nonatomic, setter=_setSuperclassToRecord:) Class _superclassToRecord; // ivar: _superclassToRecord


+(id)_sharedAppearanceRecorder;
+(id)_sharedAppearanceRecorderForClass:(Class)arg0 whenContainedIn:(id)arg1 ;
+(id)_sharedAppearanceRecorderForClassNamed:(id)arg0 superclass:(Class)arg1 whenContainedIn:(id)arg2 ;
-(id)init;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_applyCustomizations;
-(void)_importCustomizations:(id)arg0 withArchiveVersion:(NSInteger)arg1 ;
-(void)_recordInvocation:(id)arg0 withClassName:(id)arg1 containerClassNames:(id)arg2 traitCollection:(id)arg3 selectorString:(id)arg4 forRemoteProcess:(BOOL)arg5 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif