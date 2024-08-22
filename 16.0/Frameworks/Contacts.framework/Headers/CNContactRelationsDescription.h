// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTRELATIONSDESCRIPTION_H
#define CNCONTACTRELATIONSDESCRIPTION_H

@class NSString;
@protocol CNAbstractPropertyDescription, OS_dispatch_queue;


#import "CNMultiValuePropertyDescription.h"
#import "CNContactRelationsDescriptionLabels.h"

@interface CNContactRelationsDescription : CNMultiValuePropertyDescription <CNAbstractPropertyDescription>



@property (retain, nonatomic) CNContactRelationsDescriptionLabels *cachedLabels; // ivar: _cachedLabels
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_queue> *generationQueue; // ivar: _generationQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class provider; // ivar: _provider
@property (readonly) Class superclass;


-(*void)ABMultiValueValueFromCNLabeledValueValue:(id)arg0 ;
-(BOOL)abPropertyID:(*int)arg0 ;
-(BOOL)canUnifyValue:(id)arg0 withValue:(id)arg1 ;
-(BOOL)isEqualForContact:(id)arg0 other:(id)arg1 ;
-(BOOL)isNonnull;
-(Class)labeledValueClass;
-(id)CNLabeledValueValueFromABMultiValueValue:(*void)arg0 ;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)CNValueForContact:(id)arg0 ;
-(id)_builtInExtendedLabels;
-(id)_builtInStandardLabels;
-(id)cachedLabelsForPreferredLanguages:(id)arg0 ;
-(id)fromPlistTransform:(SEL)arg0 ;
-(id)init;
-(id)initWithLocalizationProvider:(Class)arg0 ;
-(id)labelsForPreferredLanguages:(id)arg0 ;
-(id)localizedStringForLabel:(id)arg0 ;
-(id)managedLabels;
-(id)plistTransform:(SEL)arg0 ;
-(id)standardLabels;
-(id)standardLabelsWithOptions:(NSUInteger)arg0 ;
-(void)_addLocalizedLabels:(id)arg0 fromLanguagePlist:(id)arg1 languageIdentifier:(id)arg2 toDictionary:(id)arg3 conflictInfo:(id)arg4 ;
-(void)decodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)encodeUsingCoder:(id)arg0 contact:(id)arg1 ;
-(void)setCNValue:(id)arg0 onContact:(id)arg1 ;


@end


#endif