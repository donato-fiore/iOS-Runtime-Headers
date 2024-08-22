// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHVISUALIZATIONMANAGER_H
#define CHVISUALIZATIONMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol CHStrokeGroupBasedVisualizationDelegate, CHRecognitionSessionObserver, CHVisualizationManagerDelegate;

#import <Foundation/Foundation.h>

#import "CHRecognitionSession.h"

@interface CHVisualizationManager : NSObject <CHStrokeGroupBasedVisualizationDelegate, CHRecognitionSessionObserver>



@property (readonly, retain, nonatomic) NSMutableArray *_activeVisualizationIDs; // ivar: __activeVisualizationIDs
@property (readonly, retain, nonatomic) NSMutableDictionary *_activeVisualizationsByID; // ivar: __activeVisualizationsByID
@property (readonly, retain, nonatomic) NSMutableSet *_enabledVisualizationIDs; // ivar: __enabledVisualizationIDs
@property (nonatomic) BOOL _registeredAsChangeObserver; // ivar: __registeredAsChangeObserver
@property (nonatomic) BOOL _registeredAsInputDrawingsClient; // ivar: __registeredAsInputDrawingsClient
@property (readonly, retain, nonatomic) NSMutableDictionary *_strokeGroupIndexByAncestorID; // ivar: __strokeGroupIndexByAncestorID
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CHVisualizationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) CHRecognitionSession *recognitionSession; // ivar: _recognitionSession
@property (nonatomic) BOOL statusReportingEnabled; // ivar: _statusReportingEnabled
@property (readonly) Class superclass;


+(BOOL)variableHeightForRecognitionSessionStatusKey:(id)arg0 ;
+(Class)_classForVisualizationIdentifier:(id)arg0 ;
+(id)availableRecognitionSessionStatusKeys;
+(id)availableVisualizationIdentifiers;
+(id)localizedNameForRecognitionSessionStatusKey:(id)arg0 ;
+(id)localizedNameForVisualizationIdentifier:(id)arg0 ;
+(struct CGColor *)newColorForVisualizedItemAtIndex:(NSInteger)arg0 ;
-(BOOL)_isActiveVisualizationForIdentifier:(id)arg0 ;
-(BOOL)isEnabledVisualizationForIdentifier:(id)arg0 ;
-(NSInteger)visualizationIndexForStrokeGroup:(id)arg0 ;
-(id)init;
-(id)initWithRecognitionSession:(id)arg0 ;
-(id)valueForRecognitionStatusKey:(id)arg0 ;
-(void)_addVisualizationForIdentifier:(id)arg0 ;
-(void)_removeVisualizationForIdentifier:(id)arg0 ;
-(void)_updateInstalledVisualizations;
-(void)_updateKnownStrokeGroupIndexes;
-(void)_updateSessionRegistration;
-(void)dealloc;
-(void)drawVisualizationInRect:(struct CGRect )arg0 context:(struct CGContext *)arg1 viewBounds:(struct CGRect )arg2 ;
-(void)recognitionSessionDidChangeStatus:(id)arg0 ;
-(void)recognitionSessionDidUpdateRecognitionResult:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 forVisualizationIdentifier:(id)arg1 ;
-(void)toggleSelectiveVisualizationsAtPoint:(struct CGPoint )arg0 ;
-(void)visualization:(id)arg0 needsDisplayInRect:(struct CGRect )arg1 ;
-(void)visualizationNeedsDisplay:(id)arg0 ;


@end


#endif