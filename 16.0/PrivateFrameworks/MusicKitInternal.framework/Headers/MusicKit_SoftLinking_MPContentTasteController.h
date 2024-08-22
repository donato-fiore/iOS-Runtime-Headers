// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPCONTENTTASTECONTROLLER_H
#define MUSICKIT_SOFTLINKING_MPCONTENTTASTECONTROLLER_H

@class MPContentTasteController;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPContentTasteController : NSObject {
    MPContentTasteController *_underlyingContentTasteController;
}




+(id)contentTasteControllerDidChangeNotificationName;
+(id)sharedContentTasteController;
-(NSInteger)_contentTasteTypeFromUnderlyingTasteType:(NSInteger)arg0 ;
-(NSInteger)_underlyingTasteTypeFromContentTasteType:(NSInteger)arg0 ;
-(NSInteger)tasteTypeForModelObject:(id)arg0 ;
-(id)_initWithUnderlyingContentTasteController:(id)arg0 ;
-(void)_handleContentTasteControllerDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)setTasteType:(NSInteger)arg0 forModelObject:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif