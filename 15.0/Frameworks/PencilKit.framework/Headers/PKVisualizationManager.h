// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKVISUALIZATIONMANAGER_H
#define PKVISUALIZATIONMANAGER_H

@class CHVisualizationManager, NSString;
@protocol CHVisualizationManagerDelegate, PKVisualizationManager;

#import <Foundation/Foundation.h>


@interface PKVisualizationManager : NSObject <CHVisualizationManagerDelegate>



@property (retain, nonatomic) CHVisualizationManager *chVisualizationManager; // ivar: _chVisualizationManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKVisualizationManager> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL recognitionStatusReportingEnabled;
@property (readonly) Class superclass;


+(id)availableRecognitionStatusKeys;
+(id)localizedNameForRecognitionStatusKey:(id)arg0 ;
-(id)initWithRecognitionSession:(id)arg0 ;
-(id)valueForRecognitionStatusKey:(id)arg0 ;
-(void)dealloc;
-(void)visualizationManager:(id)arg0 needsDisplayInRect:(struct CGRect )arg1 ;
-(void)visualizationManagerDidUpdateSessionStatus:(id)arg0 ;
-(void)visualizationManagerNeedsDisplay:(id)arg0 ;


@end


#endif