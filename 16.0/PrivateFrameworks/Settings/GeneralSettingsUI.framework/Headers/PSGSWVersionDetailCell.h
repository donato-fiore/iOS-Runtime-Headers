// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGSWVERSIONDETAILCELL_H
#define PSGSWVERSIONDETAILCELL_H

@class PSTableCell, SUDocumentationData, NSString;



@interface PSGSWVersionDetailCell : PSTableCell {
    SUDocumentationData *_documentationData;
    NSString *_buildVersion;
    int _osUpdateType;
}




-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)paragraphLabelView;
-(id)paragraphString;
-(id)systemVersionValueForKey:(id)arg0 ;
-(id)titleLabelString;
-(id)titleLabelView;
-(void)configureContentView;


@end


#endif