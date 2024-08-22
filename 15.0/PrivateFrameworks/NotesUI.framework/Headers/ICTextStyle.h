// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICTEXTSTYLE_H
#define ICTEXTSTYLE_H

@class NSAttributedString, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ICTextStyle : NSObject

@property (readonly, copy, nonatomic) NSAttributedString *attributedName;
@property (retain) NSDictionary *attributes; // ivar: _attributes
@property (readonly) BOOL isTextList;
@property (retain) NSString *name; // ivar: _name
@property unsigned int ttStyle; // ivar: _ttStyle


+(BOOL)autoListInsertionEnabled;
+(id)bodyStyle;
+(id)bulletStyle;
+(id)dashStyle;
+(id)defaultTextStyles;
+(id)fixedWidthStyle;
+(id)headingStyle;
+(id)icaxStyleDescriptionForNamedStyle:(unsigned int)arg0 ;
+(id)numberedStyle;
+(id)settingsDescriptionForNamedStyle:(unsigned int)arg0 ;
+(id)styleForNamedStyle:(unsigned int)arg0 ;
+(id)subheadingStyle;
+(id)titleForNamedStyle:(unsigned int)arg0 ;
+(id)titleStyle;
+(unsigned int)noteDefaultNamedStyle;
+(unsigned int)validatedNamedStyle:(unsigned int)arg0 ;
+(void)setAutoListInsertionEnabled:(BOOL)arg0 ;
+(void)setNoteDefaultNamedStyle:(unsigned int)arg0 ;
-(id)icaxStyleDescription;


@end


#endif