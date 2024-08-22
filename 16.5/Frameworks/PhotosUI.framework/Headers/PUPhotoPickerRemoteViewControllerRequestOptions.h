// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOPICKERREMOTEVIEWCONTROLLERREQUESTOPTIONS_H
#define PUPHOTOPICKERREMOTEVIEWCONTROLLERREQUESTOPTIONS_H

@class NSArray, NSDictionary, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PUPhotoPickerRemoteViewControllerRequestOptions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL convertAutoloopsToGIF;
@property (readonly, nonatomic) NSArray *mediaTypes;
@property (readonly, nonatomic) NSInteger modalPresentationStyle;
@property (readonly, nonatomic) NSUInteger multipleSelectionLimit;
@property (copy, nonatomic) NSDictionary *photoPickerProperties; // ivar: _photoPickerProperties
@property (copy, nonatomic) NSString *requestedClassName; // ivar: _requestedClassName
@property (retain, nonatomic) NSUUID *requestedIdentifier; // ivar: _requestedIdentifier
@property (readonly, nonatomic) BOOL requiresPickingConfirmation;
@property (readonly, nonatomic) NSUInteger savingOptions;
@property (readonly, nonatomic) BOOL showsFileSizePicker;
@property (readonly, nonatomic) BOOL showsPrompt;
@property (readonly, nonatomic) NSInteger sourceType;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestedClassName:(id)arg0 photoPickerProperties:(id)arg1 ;
-(id)initWithRequestedIdentifier:(id)arg0 photoPickerProperties:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif