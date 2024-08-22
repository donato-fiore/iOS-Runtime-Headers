// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDNETWORKPERFORMANCEMETRIC_H
#define AWDNETWORKPERFORMANCEMETRIC_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDNetworkPerformanceMetric : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL acceptablePerformanceResult; // ivar: _acceptablePerformanceResult
@property (retain, nonatomic) NSString *awdlElectionParameters; // ivar: _awdlElectionParameters
@property (retain, nonatomic) NSString *awdlMasterChannel; // ivar: _awdlMasterChannel
@property (retain, nonatomic) NSString *awdlOpMode; // ivar: _awdlOpMode
@property (nonatomic) BOOL awdlPowerState; // ivar: _awdlPowerState
@property (retain, nonatomic) NSString *awdlSchedule; // ivar: _awdlSchedule
@property (retain, nonatomic) NSString *awdlSecondaryMasterChannel; // ivar: _awdlSecondaryMasterChannel
@property (retain, nonatomic) NSString *awdlSyncChannelSequence; // ivar: _awdlSyncChannelSequence
@property (retain, nonatomic) NSString *awdlSyncState; // ivar: _awdlSyncState
@property (retain, nonatomic) NSString *btConnectedDevicesCount; // ivar: _btConnectedDevicesCount
@property (nonatomic) BOOL btIsConnectable; // ivar: _btIsConnectable
@property (nonatomic) BOOL btIsDiscoverable; // ivar: _btIsDiscoverable
@property (nonatomic) BOOL btIsPowerOn; // ivar: _btIsPowerOn
@property (nonatomic) BOOL btIsScanning; // ivar: _btIsScanning
@property (retain, nonatomic) NSString *callingClient; // ivar: _callingClient
@property (retain, nonatomic) NSString *cellularActiveContexts; // ivar: _cellularActiveContexts
@property (retain, nonatomic) NSString *cellularAggregatedDLBW; // ivar: _cellularAggregatedDLBW
@property (retain, nonatomic) NSString *cellularAggregatedULBW; // ivar: _cellularAggregatedULBW
@property (nonatomic) BOOL cellularAllowsVoip; // ivar: _cellularAllowsVoip
@property (retain, nonatomic) NSString *cellularAttached; // ivar: _cellularAttached
@property (retain, nonatomic) NSString *cellularBandinfo; // ivar: _cellularBandinfo
@property (retain, nonatomic) NSString *cellularBandwidth; // ivar: _cellularBandwidth
@property (retain, nonatomic) NSString *cellularCarrierName; // ivar: _cellularCarrierName
@property (retain, nonatomic) NSString *cellularCellid; // ivar: _cellularCellid
@property (retain, nonatomic) NSString *cellularDataBearerSoMask; // ivar: _cellularDataBearerSoMask
@property (retain, nonatomic) NSString *cellularDataBearerTechnology; // ivar: _cellularDataBearerTechnology
@property (nonatomic) BOOL cellularDataIsEnabled; // ivar: _cellularDataIsEnabled
@property (retain, nonatomic) NSString *cellularDataPlanSignalingReductionOverride; // ivar: _cellularDataPlanSignalingReductionOverride
@property (retain, nonatomic) NSString *cellularDataPossible; // ivar: _cellularDataPossible
@property (retain, nonatomic) NSString *cellularInHomeCountry; // ivar: _cellularInHomeCountry
@property (retain, nonatomic) NSString *cellularIndicator; // ivar: _cellularIndicator
@property (retain, nonatomic) NSString *cellularIndicatorOverride; // ivar: _cellularIndicatorOverride
@property (retain, nonatomic) NSString *cellularIsoCountryCode; // ivar: _cellularIsoCountryCode
@property (retain, nonatomic) NSString *cellularIssa; // ivar: _cellularIssa
@property (retain, nonatomic) NSString *cellularLac; // ivar: _cellularLac
@property (retain, nonatomic) NSString *cellularLqm; // ivar: _cellularLqm
@property (retain, nonatomic) NSString *cellularLteMaxScheduledLayers; // ivar: _cellularLteMaxScheduledLayers
@property (retain, nonatomic) NSString *cellularLteNrConfiguredBw; // ivar: _cellularLteNrConfiguredBw
@property (retain, nonatomic) NSString *cellularMaxDlMod; // ivar: _cellularMaxDlMod
@property (retain, nonatomic) NSString *cellularMaxNwMimoLyr; // ivar: _cellularMaxNwMimoLyr
@property (retain, nonatomic) NSString *cellularMaxSchdMimoLyr; // ivar: _cellularMaxSchdMimoLyr
@property (retain, nonatomic) NSString *cellularMaxUeRank; // ivar: _cellularMaxUeRank
@property (retain, nonatomic) NSString *cellularMaxUlMod; // ivar: _cellularMaxUlMod
@property (retain, nonatomic) NSString *cellularMobileCountryCode; // ivar: _cellularMobileCountryCode
@property (retain, nonatomic) NSString *cellularMobileNetworkCode; // ivar: _cellularMobileNetworkCode
@property (retain, nonatomic) NSString *cellularNewRadioCoverage; // ivar: _cellularNewRadioCoverage
@property (retain, nonatomic) NSString *cellularNewRadioDataBearer; // ivar: _cellularNewRadioDataBearer
@property (retain, nonatomic) NSString *cellularNewRadioMmwaveDataBearer; // ivar: _cellularNewRadioMmwaveDataBearer
@property (retain, nonatomic) NSString *cellularNewRadioNsaCoverage; // ivar: _cellularNewRadioNsaCoverage
@property (retain, nonatomic) NSString *cellularNewRadioNsaDataBearer; // ivar: _cellularNewRadioNsaDataBearer
@property (retain, nonatomic) NSString *cellularNewRadioSaCoverage; // ivar: _cellularNewRadioSaCoverage
@property (retain, nonatomic) NSString *cellularNewRadioSaDataBearer; // ivar: _cellularNewRadioSaDataBearer
@property (retain, nonatomic) NSString *cellularNewRadioSub6DataBearer; // ivar: _cellularNewRadioSub6DataBearer
@property (retain, nonatomic) NSString *cellularNrConfiguredBw; // ivar: _cellularNrConfiguredBw
@property (retain, nonatomic) NSString *cellularNrLayers; // ivar: _cellularNrLayers
@property (retain, nonatomic) NSString *cellularNrModulation; // ivar: _cellularNrModulation
@property (retain, nonatomic) NSString *cellularNrRsrp; // ivar: _cellularNrRsrp
@property (retain, nonatomic) NSString *cellularNrRsrq; // ivar: _cellularNrRsrq
@property (retain, nonatomic) NSString *cellularNrSinr; // ivar: _cellularNrSinr
@property (retain, nonatomic) NSString *cellularNrSnr; // ivar: _cellularNrSnr
@property (retain, nonatomic) NSString *cellularNrarfcn; // ivar: _cellularNrarfcn
@property (retain, nonatomic) NSString *cellularPid; // ivar: _cellularPid
@property (retain, nonatomic) NSString *cellularRadioAccessTechnology; // ivar: _cellularRadioAccessTechnology
@property (retain, nonatomic) NSString *cellularRadioAccessTechnologyCtDataStatus; // ivar: _cellularRadioAccessTechnologyCtDataStatus
@property (retain, nonatomic) NSString *cellularRadioFrequency; // ivar: _cellularRadioFrequency
@property (retain, nonatomic) NSString *cellularRnMobileCountryCode; // ivar: _cellularRnMobileCountryCode
@property (retain, nonatomic) NSString *cellularRnMobileNetworkCode; // ivar: _cellularRnMobileNetworkCode
@property (retain, nonatomic) NSString *cellularRoamAllowed; // ivar: _cellularRoamAllowed
@property (retain, nonatomic) NSString *cellularRsrp; // ivar: _cellularRsrp
@property (retain, nonatomic) NSString *cellularSnr; // ivar: _cellularSnr
@property (retain, nonatomic) NSString *cellularTac; // ivar: _cellularTac
@property (retain, nonatomic) NSString *cellularTotalActiveContexts; // ivar: _cellularTotalActiveContexts
@property (retain, nonatomic) NSString *cellularTotalBw; // ivar: _cellularTotalBw
@property (retain, nonatomic) NSString *cellularTotalCcs; // ivar: _cellularTotalCcs
@property (retain, nonatomic) NSString *cellularTotalDlMimoLayers; // ivar: _cellularTotalDlMimoLayers
@property (retain, nonatomic) NSString *cellularTotalLayers; // ivar: _cellularTotalLayers
@property (retain, nonatomic) NSString *cellularTotalNumCcs; // ivar: _cellularTotalNumCcs
@property (retain, nonatomic) NSString *cellularUarfcn; // ivar: _cellularUarfcn
@property (retain, nonatomic) NSString *downloadCdnPop; // ivar: _downloadCdnPop
@property (retain, nonatomic) NSString *downloadCdnUuid; // ivar: _downloadCdnUuid
@property (retain, nonatomic) NSString *downloadConnectionTime; // ivar: _downloadConnectionTime
@property (retain, nonatomic) NSString *downloadDomainLookupTime; // ivar: _downloadDomainLookupTime
@property (retain, nonatomic) NSString *downloadEndDataBearerTechnology; // ivar: _downloadEndDataBearerTechnology
@property (retain, nonatomic) NSString *downloadEndPrimaryIpv4Interface; // ivar: _downloadEndPrimaryIpv4Interface
@property (retain, nonatomic) NSString *downloadEndRadioFrequency; // ivar: _downloadEndRadioFrequency
@property (retain, nonatomic) NSString *downloadEndRat; // ivar: _downloadEndRat
@property (retain, nonatomic) NSString *downloadError; // ivar: _downloadError
@property (retain, nonatomic) NSString *downloadErrorCode; // ivar: _downloadErrorCode
@property (retain, nonatomic) NSString *downloadErrorDomain; // ivar: _downloadErrorDomain
@property (retain, nonatomic) NSString *downloadFileSize; // ivar: _downloadFileSize
@property (retain, nonatomic) NSString *downloadInterfaceName; // ivar: _downloadInterfaceName
@property (retain, nonatomic) NSString *downloadInterfaceServiceName; // ivar: _downloadInterfaceServiceName
@property (nonatomic) BOOL downloadIsCellular; // ivar: _downloadIsCellular
@property (nonatomic) BOOL downloadIsConstrained; // ivar: _downloadIsConstrained
@property (nonatomic) BOOL downloadIsExpensive; // ivar: _downloadIsExpensive
@property (nonatomic) BOOL downloadIsMultipath; // ivar: _downloadIsMultipath
@property (nonatomic) BOOL downloadIsProxyConnection; // ivar: _downloadIsProxyConnection
@property (nonatomic) BOOL downloadIsReusedConnection; // ivar: _downloadIsReusedConnection
@property (retain, nonatomic) NSString *downloadMaxSpeedObserved; // ivar: _downloadMaxSpeedObserved
@property (retain, nonatomic) NSString *downloadNumberOfStreams; // ivar: _downloadNumberOfStreams
@property (retain, nonatomic) NSString *downloadProtocolName; // ivar: _downloadProtocolName
@property (retain, nonatomic) NSString *downloadRemoteAddress; // ivar: _downloadRemoteAddress
@property (retain, nonatomic) NSString *downloadRemotePort; // ivar: _downloadRemotePort
@property (retain, nonatomic) NSString *downloadRequestTime; // ivar: _downloadRequestTime
@property (retain, nonatomic) NSString *downloadRequestToResponseTime; // ivar: _downloadRequestToResponseTime
@property (retain, nonatomic) NSString *downloadResponseTime; // ivar: _downloadResponseTime
@property (retain, nonatomic) NSString *downloadSecureConnectionTime; // ivar: _downloadSecureConnectionTime
@property (retain, nonatomic) NSString *downloadServer; // ivar: _downloadServer
@property (retain, nonatomic) NSString *downloadSpeed; // ivar: _downloadSpeed
@property (retain, nonatomic) NSString *downloadStableSpeed; // ivar: _downloadStableSpeed
@property (retain, nonatomic) NSString *downloadStartDataBearerTechnology; // ivar: _downloadStartDataBearerTechnology
@property (retain, nonatomic) NSString *downloadStartPrimaryIpv4Interface; // ivar: _downloadStartPrimaryIpv4Interface
@property (retain, nonatomic) NSString *downloadStartRadioFrequency; // ivar: _downloadStartRadioFrequency
@property (retain, nonatomic) NSString *downloadStartRat; // ivar: _downloadStartRat
@property (nonatomic) BOOL hasAcceptablePerformanceResult;
@property (readonly, nonatomic) BOOL hasAwdlElectionParameters;
@property (readonly, nonatomic) BOOL hasAwdlMasterChannel;
@property (readonly, nonatomic) BOOL hasAwdlOpMode;
@property (nonatomic) BOOL hasAwdlPowerState;
@property (readonly, nonatomic) BOOL hasAwdlSchedule;
@property (readonly, nonatomic) BOOL hasAwdlSecondaryMasterChannel;
@property (readonly, nonatomic) BOOL hasAwdlSyncChannelSequence;
@property (readonly, nonatomic) BOOL hasAwdlSyncState;
@property (readonly, nonatomic) BOOL hasBtConnectedDevicesCount;
@property (nonatomic) BOOL hasBtIsConnectable;
@property (nonatomic) BOOL hasBtIsDiscoverable;
@property (nonatomic) BOOL hasBtIsPowerOn;
@property (nonatomic) BOOL hasBtIsScanning;
@property (readonly, nonatomic) BOOL hasCallingClient;
@property (readonly, nonatomic) BOOL hasCellularActiveContexts;
@property (readonly, nonatomic) BOOL hasCellularAggregatedDLBW;
@property (readonly, nonatomic) BOOL hasCellularAggregatedULBW;
@property (nonatomic) BOOL hasCellularAllowsVoip;
@property (readonly, nonatomic) BOOL hasCellularAttached;
@property (readonly, nonatomic) BOOL hasCellularBandinfo;
@property (readonly, nonatomic) BOOL hasCellularBandwidth;
@property (readonly, nonatomic) BOOL hasCellularCarrierName;
@property (readonly, nonatomic) BOOL hasCellularCellid;
@property (readonly, nonatomic) BOOL hasCellularDataBearerSoMask;
@property (readonly, nonatomic) BOOL hasCellularDataBearerTechnology;
@property (nonatomic) BOOL hasCellularDataIsEnabled;
@property (readonly, nonatomic) BOOL hasCellularDataPlanSignalingReductionOverride;
@property (readonly, nonatomic) BOOL hasCellularDataPossible;
@property (readonly, nonatomic) BOOL hasCellularInHomeCountry;
@property (readonly, nonatomic) BOOL hasCellularIndicator;
@property (readonly, nonatomic) BOOL hasCellularIndicatorOverride;
@property (readonly, nonatomic) BOOL hasCellularIsoCountryCode;
@property (readonly, nonatomic) BOOL hasCellularIssa;
@property (readonly, nonatomic) BOOL hasCellularLac;
@property (readonly, nonatomic) BOOL hasCellularLqm;
@property (readonly, nonatomic) BOOL hasCellularLteMaxScheduledLayers;
@property (readonly, nonatomic) BOOL hasCellularLteNrConfiguredBw;
@property (readonly, nonatomic) BOOL hasCellularMaxDlMod;
@property (readonly, nonatomic) BOOL hasCellularMaxNwMimoLyr;
@property (readonly, nonatomic) BOOL hasCellularMaxSchdMimoLyr;
@property (readonly, nonatomic) BOOL hasCellularMaxUeRank;
@property (readonly, nonatomic) BOOL hasCellularMaxUlMod;
@property (readonly, nonatomic) BOOL hasCellularMobileCountryCode;
@property (readonly, nonatomic) BOOL hasCellularMobileNetworkCode;
@property (readonly, nonatomic) BOOL hasCellularNewRadioCoverage;
@property (readonly, nonatomic) BOOL hasCellularNewRadioDataBearer;
@property (readonly, nonatomic) BOOL hasCellularNewRadioMmwaveDataBearer;
@property (readonly, nonatomic) BOOL hasCellularNewRadioNsaCoverage;
@property (readonly, nonatomic) BOOL hasCellularNewRadioNsaDataBearer;
@property (readonly, nonatomic) BOOL hasCellularNewRadioSaCoverage;
@property (readonly, nonatomic) BOOL hasCellularNewRadioSaDataBearer;
@property (readonly, nonatomic) BOOL hasCellularNewRadioSub6DataBearer;
@property (readonly, nonatomic) BOOL hasCellularNrConfiguredBw;
@property (readonly, nonatomic) BOOL hasCellularNrLayers;
@property (readonly, nonatomic) BOOL hasCellularNrModulation;
@property (readonly, nonatomic) BOOL hasCellularNrRsrp;
@property (readonly, nonatomic) BOOL hasCellularNrRsrq;
@property (readonly, nonatomic) BOOL hasCellularNrSinr;
@property (readonly, nonatomic) BOOL hasCellularNrSnr;
@property (readonly, nonatomic) BOOL hasCellularNrarfcn;
@property (readonly, nonatomic) BOOL hasCellularPid;
@property (readonly, nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (readonly, nonatomic) BOOL hasCellularRadioAccessTechnologyCtDataStatus;
@property (readonly, nonatomic) BOOL hasCellularRadioFrequency;
@property (readonly, nonatomic) BOOL hasCellularRnMobileCountryCode;
@property (readonly, nonatomic) BOOL hasCellularRnMobileNetworkCode;
@property (readonly, nonatomic) BOOL hasCellularRoamAllowed;
@property (readonly, nonatomic) BOOL hasCellularRsrp;
@property (readonly, nonatomic) BOOL hasCellularSnr;
@property (readonly, nonatomic) BOOL hasCellularTac;
@property (readonly, nonatomic) BOOL hasCellularTotalActiveContexts;
@property (readonly, nonatomic) BOOL hasCellularTotalBw;
@property (readonly, nonatomic) BOOL hasCellularTotalCcs;
@property (readonly, nonatomic) BOOL hasCellularTotalDlMimoLayers;
@property (readonly, nonatomic) BOOL hasCellularTotalLayers;
@property (readonly, nonatomic) BOOL hasCellularTotalNumCcs;
@property (readonly, nonatomic) BOOL hasCellularUarfcn;
@property (readonly, nonatomic) BOOL hasDownloadCdnPop;
@property (readonly, nonatomic) BOOL hasDownloadCdnUuid;
@property (readonly, nonatomic) BOOL hasDownloadConnectionTime;
@property (readonly, nonatomic) BOOL hasDownloadDomainLookupTime;
@property (readonly, nonatomic) BOOL hasDownloadEndDataBearerTechnology;
@property (readonly, nonatomic) BOOL hasDownloadEndPrimaryIpv4Interface;
@property (readonly, nonatomic) BOOL hasDownloadEndRadioFrequency;
@property (readonly, nonatomic) BOOL hasDownloadEndRat;
@property (readonly, nonatomic) BOOL hasDownloadError;
@property (readonly, nonatomic) BOOL hasDownloadErrorCode;
@property (readonly, nonatomic) BOOL hasDownloadErrorDomain;
@property (readonly, nonatomic) BOOL hasDownloadFileSize;
@property (readonly, nonatomic) BOOL hasDownloadInterfaceName;
@property (readonly, nonatomic) BOOL hasDownloadInterfaceServiceName;
@property (nonatomic) BOOL hasDownloadIsCellular;
@property (nonatomic) BOOL hasDownloadIsConstrained;
@property (nonatomic) BOOL hasDownloadIsExpensive;
@property (nonatomic) BOOL hasDownloadIsMultipath;
@property (nonatomic) BOOL hasDownloadIsProxyConnection;
@property (nonatomic) BOOL hasDownloadIsReusedConnection;
@property (readonly, nonatomic) BOOL hasDownloadMaxSpeedObserved;
@property (readonly, nonatomic) BOOL hasDownloadNumberOfStreams;
@property (readonly, nonatomic) BOOL hasDownloadProtocolName;
@property (readonly, nonatomic) BOOL hasDownloadRemoteAddress;
@property (readonly, nonatomic) BOOL hasDownloadRemotePort;
@property (readonly, nonatomic) BOOL hasDownloadRequestTime;
@property (readonly, nonatomic) BOOL hasDownloadRequestToResponseTime;
@property (readonly, nonatomic) BOOL hasDownloadResponseTime;
@property (readonly, nonatomic) BOOL hasDownloadSecureConnectionTime;
@property (readonly, nonatomic) BOOL hasDownloadServer;
@property (readonly, nonatomic) BOOL hasDownloadSpeed;
@property (readonly, nonatomic) BOOL hasDownloadStableSpeed;
@property (readonly, nonatomic) BOOL hasDownloadStartDataBearerTechnology;
@property (readonly, nonatomic) BOOL hasDownloadStartPrimaryIpv4Interface;
@property (readonly, nonatomic) BOOL hasDownloadStartRadioFrequency;
@property (readonly, nonatomic) BOOL hasDownloadStartRat;
@property (nonatomic) BOOL hasNetworkIsAppleReachable;
@property (readonly, nonatomic) BOOL hasNetworkPrimaryIpv4InterfaceName;
@property (readonly, nonatomic) BOOL hasNetworkPrimaryIpv4ServiceName;
@property (readonly, nonatomic) BOOL hasNetworkPrimaryIpv6InterfaceName;
@property (readonly, nonatomic) BOOL hasNetworkPrimaryIpv6ServiceName;
@property (readonly, nonatomic) BOOL hasNetworkQualityDownloadSpeed;
@property (readonly, nonatomic) BOOL hasNetworkQualityError;
@property (readonly, nonatomic) BOOL hasNetworkQualityErrorCode;
@property (readonly, nonatomic) BOOL hasNetworkQualityErrorDomain;
@property (readonly, nonatomic) BOOL hasNetworkQualityRating;
@property (readonly, nonatomic) BOOL hasNetworkQualityResponsiveness;
@property (readonly, nonatomic) BOOL hasNetworkQualityUploadSpeed;
@property (readonly, nonatomic) BOOL hasNptkitFrameworkVersion;
@property (readonly, nonatomic) BOOL hasPerformanceTestStartTime;
@property (readonly, nonatomic) BOOL hasPingAddress;
@property (readonly, nonatomic) BOOL hasPingError;
@property (readonly, nonatomic) BOOL hasPingErrorCode;
@property (readonly, nonatomic) BOOL hasPingErrorDomain;
@property (readonly, nonatomic) BOOL hasPingLossPercent;
@property (readonly, nonatomic) BOOL hasPingMaxLatency;
@property (readonly, nonatomic) BOOL hasPingMeanLatency;
@property (readonly, nonatomic) BOOL hasPingMinLatency;
@property (readonly, nonatomic) BOOL hasPingStandardDeviation;
@property (readonly, nonatomic) BOOL hasPowerBatteryWarningLevel;
@property (readonly, nonatomic) BOOL hasPowerSourceType;
@property (readonly, nonatomic) BOOL hasPowerStateCaps;
@property (readonly, nonatomic) BOOL hasSystemActiveProcessorCount;
@property (readonly, nonatomic) BOOL hasSystemBatteryLevel;
@property (readonly, nonatomic) BOOL hasSystemBatteryState;
@property (readonly, nonatomic) BOOL hasSystemDeviceClass;
@property (readonly, nonatomic) BOOL hasSystemDeviceModel;
@property (nonatomic) BOOL hasSystemLowPowerModeEnabled;
@property (readonly, nonatomic) BOOL hasSystemName;
@property (readonly, nonatomic) BOOL hasSystemOsVariant;
@property (readonly, nonatomic) BOOL hasSystemPhysicalMemory;
@property (nonatomic) BOOL hasSystemPowersourceConnected;
@property (readonly, nonatomic) BOOL hasSystemProcessorCount;
@property (readonly, nonatomic) BOOL hasSystemVersion;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasUploadCdnPop;
@property (readonly, nonatomic) BOOL hasUploadCdnUuid;
@property (readonly, nonatomic) BOOL hasUploadConnectionTime;
@property (readonly, nonatomic) BOOL hasUploadDomainLookupTime;
@property (readonly, nonatomic) BOOL hasUploadEndDataBearerTechnology;
@property (readonly, nonatomic) BOOL hasUploadEndPrimaryIpv4Interface;
@property (readonly, nonatomic) BOOL hasUploadEndRadioFrequency;
@property (readonly, nonatomic) BOOL hasUploadEndRat;
@property (readonly, nonatomic) BOOL hasUploadError;
@property (readonly, nonatomic) BOOL hasUploadErrorCode;
@property (readonly, nonatomic) BOOL hasUploadErrorDomain;
@property (readonly, nonatomic) BOOL hasUploadFileSize;
@property (readonly, nonatomic) BOOL hasUploadInterfaceName;
@property (readonly, nonatomic) BOOL hasUploadInterfaceServiceName;
@property (nonatomic) BOOL hasUploadIsCellular;
@property (nonatomic) BOOL hasUploadIsConstrained;
@property (nonatomic) BOOL hasUploadIsExpensive;
@property (nonatomic) BOOL hasUploadIsMultipath;
@property (nonatomic) BOOL hasUploadIsProxyConnection;
@property (nonatomic) BOOL hasUploadIsReusedConnection;
@property (readonly, nonatomic) BOOL hasUploadMaxSpeedObserved;
@property (readonly, nonatomic) BOOL hasUploadNumberOfStreams;
@property (readonly, nonatomic) BOOL hasUploadProtocolName;
@property (readonly, nonatomic) BOOL hasUploadRemoteAddress;
@property (readonly, nonatomic) BOOL hasUploadRemotePort;
@property (readonly, nonatomic) BOOL hasUploadRequestTime;
@property (readonly, nonatomic) BOOL hasUploadRequestToResponseTime;
@property (readonly, nonatomic) BOOL hasUploadResponseTime;
@property (readonly, nonatomic) BOOL hasUploadSecureConnectionTime;
@property (readonly, nonatomic) BOOL hasUploadServer;
@property (readonly, nonatomic) BOOL hasUploadSpeed;
@property (readonly, nonatomic) BOOL hasUploadStableSpeed;
@property (readonly, nonatomic) BOOL hasUploadStartDataBearerTechnology;
@property (readonly, nonatomic) BOOL hasUploadStartPrimaryIpv4Interface;
@property (readonly, nonatomic) BOOL hasUploadStartRadioFrequency;
@property (readonly, nonatomic) BOOL hasUploadStartRat;
@property (nonatomic) BOOL hasUseWifiWasSpecified;
@property (readonly, nonatomic) BOOL hasVpnConnectionState;
@property (readonly, nonatomic) BOOL hasWifiAveragePhyRateRx;
@property (readonly, nonatomic) BOOL hasWifiAverageRssi;
@property (readonly, nonatomic) BOOL hasWifiAverageSnr;
@property (readonly, nonatomic) BOOL hasWifiAverageTcpRtt;
@property (readonly, nonatomic) BOOL hasWifiBtcMode;
@property (readonly, nonatomic) BOOL hasWifiCca;
@property (readonly, nonatomic) BOOL hasWifiChannel;
@property (readonly, nonatomic) BOOL hasWifiCwfCca;
@property (readonly, nonatomic) BOOL hasWifiEapolControlMode;
@property (readonly, nonatomic) BOOL hasWifiEapolSupplicantState;
@property (readonly, nonatomic) BOOL hasWifiGuardInterval;
@property (readonly, nonatomic) BOOL hasWifiHiddenState;
@property (nonatomic) BOOL hasWifiIsCaptive;
@property (readonly, nonatomic) BOOL hasWifiMcsIndex;
@property (readonly, nonatomic) BOOL hasWifiNoise;
@property (readonly, nonatomic) BOOL hasWifiNumberOfSpatialStreams;
@property (readonly, nonatomic) BOOL hasWifiOpMode;
@property (readonly, nonatomic) BOOL hasWifiPhyMode;
@property (readonly, nonatomic) BOOL hasWifiRssi;
@property (readonly, nonatomic) BOOL hasWifiSecurity;
@property (readonly, nonatomic) BOOL hasWifiTxRate;
@property (readonly, nonatomic) BOOL hasWrmChannelType;
@property (nonatomic) BOOL networkIsAppleReachable; // ivar: _networkIsAppleReachable
@property (retain, nonatomic) NSString *networkPrimaryIpv4InterfaceName; // ivar: _networkPrimaryIpv4InterfaceName
@property (retain, nonatomic) NSString *networkPrimaryIpv4ServiceName; // ivar: _networkPrimaryIpv4ServiceName
@property (retain, nonatomic) NSString *networkPrimaryIpv6InterfaceName; // ivar: _networkPrimaryIpv6InterfaceName
@property (retain, nonatomic) NSString *networkPrimaryIpv6ServiceName; // ivar: _networkPrimaryIpv6ServiceName
@property (retain, nonatomic) NSString *networkQualityDownloadSpeed; // ivar: _networkQualityDownloadSpeed
@property (retain, nonatomic) NSString *networkQualityError; // ivar: _networkQualityError
@property (retain, nonatomic) NSString *networkQualityErrorCode; // ivar: _networkQualityErrorCode
@property (retain, nonatomic) NSString *networkQualityErrorDomain; // ivar: _networkQualityErrorDomain
@property (retain, nonatomic) NSString *networkQualityRating; // ivar: _networkQualityRating
@property (retain, nonatomic) NSString *networkQualityResponsiveness; // ivar: _networkQualityResponsiveness
@property (retain, nonatomic) NSString *networkQualityUploadSpeed; // ivar: _networkQualityUploadSpeed
@property (retain, nonatomic) NSString *nptkitFrameworkVersion; // ivar: _nptkitFrameworkVersion
@property (retain, nonatomic) NSString *performanceTestStartTime; // ivar: _performanceTestStartTime
@property (retain, nonatomic) NSString *pingAddress; // ivar: _pingAddress
@property (retain, nonatomic) NSString *pingError; // ivar: _pingError
@property (retain, nonatomic) NSString *pingErrorCode; // ivar: _pingErrorCode
@property (retain, nonatomic) NSString *pingErrorDomain; // ivar: _pingErrorDomain
@property (retain, nonatomic) NSString *pingLossPercent; // ivar: _pingLossPercent
@property (retain, nonatomic) NSString *pingMaxLatency; // ivar: _pingMaxLatency
@property (retain, nonatomic) NSString *pingMeanLatency; // ivar: _pingMeanLatency
@property (retain, nonatomic) NSString *pingMinLatency; // ivar: _pingMinLatency
@property (retain, nonatomic) NSString *pingStandardDeviation; // ivar: _pingStandardDeviation
@property (retain, nonatomic) NSString *powerBatteryWarningLevel; // ivar: _powerBatteryWarningLevel
@property (retain, nonatomic) NSString *powerSourceType; // ivar: _powerSourceType
@property (retain, nonatomic) NSString *powerStateCaps; // ivar: _powerStateCaps
@property (retain, nonatomic) NSString *systemActiveProcessorCount; // ivar: _systemActiveProcessorCount
@property (retain, nonatomic) NSString *systemBatteryLevel; // ivar: _systemBatteryLevel
@property (retain, nonatomic) NSString *systemBatteryState; // ivar: _systemBatteryState
@property (retain, nonatomic) NSString *systemDeviceClass; // ivar: _systemDeviceClass
@property (retain, nonatomic) NSString *systemDeviceModel; // ivar: _systemDeviceModel
@property (nonatomic) BOOL systemLowPowerModeEnabled; // ivar: _systemLowPowerModeEnabled
@property (retain, nonatomic) NSString *systemName; // ivar: _systemName
@property (retain, nonatomic) NSString *systemOsVariant; // ivar: _systemOsVariant
@property (retain, nonatomic) NSString *systemPhysicalMemory; // ivar: _systemPhysicalMemory
@property (nonatomic) BOOL systemPowersourceConnected; // ivar: _systemPowersourceConnected
@property (retain, nonatomic) NSString *systemProcessorCount; // ivar: _systemProcessorCount
@property (retain, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *uploadCdnPop; // ivar: _uploadCdnPop
@property (retain, nonatomic) NSString *uploadCdnUuid; // ivar: _uploadCdnUuid
@property (retain, nonatomic) NSString *uploadConnectionTime; // ivar: _uploadConnectionTime
@property (retain, nonatomic) NSString *uploadDomainLookupTime; // ivar: _uploadDomainLookupTime
@property (retain, nonatomic) NSString *uploadEndDataBearerTechnology; // ivar: _uploadEndDataBearerTechnology
@property (retain, nonatomic) NSString *uploadEndPrimaryIpv4Interface; // ivar: _uploadEndPrimaryIpv4Interface
@property (retain, nonatomic) NSString *uploadEndRadioFrequency; // ivar: _uploadEndRadioFrequency
@property (retain, nonatomic) NSString *uploadEndRat; // ivar: _uploadEndRat
@property (retain, nonatomic) NSString *uploadError; // ivar: _uploadError
@property (retain, nonatomic) NSString *uploadErrorCode; // ivar: _uploadErrorCode
@property (retain, nonatomic) NSString *uploadErrorDomain; // ivar: _uploadErrorDomain
@property (retain, nonatomic) NSString *uploadFileSize; // ivar: _uploadFileSize
@property (retain, nonatomic) NSString *uploadInterfaceName; // ivar: _uploadInterfaceName
@property (retain, nonatomic) NSString *uploadInterfaceServiceName; // ivar: _uploadInterfaceServiceName
@property (nonatomic) BOOL uploadIsCellular; // ivar: _uploadIsCellular
@property (nonatomic) BOOL uploadIsConstrained; // ivar: _uploadIsConstrained
@property (nonatomic) BOOL uploadIsExpensive; // ivar: _uploadIsExpensive
@property (nonatomic) BOOL uploadIsMultipath; // ivar: _uploadIsMultipath
@property (nonatomic) BOOL uploadIsProxyConnection; // ivar: _uploadIsProxyConnection
@property (nonatomic) BOOL uploadIsReusedConnection; // ivar: _uploadIsReusedConnection
@property (retain, nonatomic) NSString *uploadMaxSpeedObserved; // ivar: _uploadMaxSpeedObserved
@property (retain, nonatomic) NSString *uploadNumberOfStreams; // ivar: _uploadNumberOfStreams
@property (retain, nonatomic) NSString *uploadProtocolName; // ivar: _uploadProtocolName
@property (retain, nonatomic) NSString *uploadRemoteAddress; // ivar: _uploadRemoteAddress
@property (retain, nonatomic) NSString *uploadRemotePort; // ivar: _uploadRemotePort
@property (retain, nonatomic) NSString *uploadRequestTime; // ivar: _uploadRequestTime
@property (retain, nonatomic) NSString *uploadRequestToResponseTime; // ivar: _uploadRequestToResponseTime
@property (retain, nonatomic) NSString *uploadResponseTime; // ivar: _uploadResponseTime
@property (retain, nonatomic) NSString *uploadSecureConnectionTime; // ivar: _uploadSecureConnectionTime
@property (retain, nonatomic) NSString *uploadServer; // ivar: _uploadServer
@property (retain, nonatomic) NSString *uploadSpeed; // ivar: _uploadSpeed
@property (retain, nonatomic) NSString *uploadStableSpeed; // ivar: _uploadStableSpeed
@property (retain, nonatomic) NSString *uploadStartDataBearerTechnology; // ivar: _uploadStartDataBearerTechnology
@property (retain, nonatomic) NSString *uploadStartPrimaryIpv4Interface; // ivar: _uploadStartPrimaryIpv4Interface
@property (retain, nonatomic) NSString *uploadStartRadioFrequency; // ivar: _uploadStartRadioFrequency
@property (retain, nonatomic) NSString *uploadStartRat; // ivar: _uploadStartRat
@property (nonatomic) BOOL useWifiWasSpecified; // ivar: _useWifiWasSpecified
@property (retain, nonatomic) NSString *vpnConnectionState; // ivar: _vpnConnectionState
@property (retain, nonatomic) NSString *wifiAveragePhyRateRx; // ivar: _wifiAveragePhyRateRx
@property (retain, nonatomic) NSString *wifiAverageRssi; // ivar: _wifiAverageRssi
@property (retain, nonatomic) NSString *wifiAverageSnr; // ivar: _wifiAverageSnr
@property (retain, nonatomic) NSString *wifiAverageTcpRtt; // ivar: _wifiAverageTcpRtt
@property (retain, nonatomic) NSString *wifiBtcMode; // ivar: _wifiBtcMode
@property (retain, nonatomic) NSString *wifiCca; // ivar: _wifiCca
@property (retain, nonatomic) NSString *wifiChannel; // ivar: _wifiChannel
@property (retain, nonatomic) NSString *wifiCwfCca; // ivar: _wifiCwfCca
@property (retain, nonatomic) NSString *wifiEapolControlMode; // ivar: _wifiEapolControlMode
@property (retain, nonatomic) NSString *wifiEapolSupplicantState; // ivar: _wifiEapolSupplicantState
@property (retain, nonatomic) NSString *wifiGuardInterval; // ivar: _wifiGuardInterval
@property (retain, nonatomic) NSString *wifiHiddenState; // ivar: _wifiHiddenState
@property (nonatomic) BOOL wifiIsCaptive; // ivar: _wifiIsCaptive
@property (retain, nonatomic) NSString *wifiMcsIndex; // ivar: _wifiMcsIndex
@property (retain, nonatomic) NSString *wifiNoise; // ivar: _wifiNoise
@property (retain, nonatomic) NSString *wifiNumberOfSpatialStreams; // ivar: _wifiNumberOfSpatialStreams
@property (retain, nonatomic) NSString *wifiOpMode; // ivar: _wifiOpMode
@property (retain, nonatomic) NSString *wifiPhyMode; // ivar: _wifiPhyMode
@property (retain, nonatomic) NSString *wifiRssi; // ivar: _wifiRssi
@property (retain, nonatomic) NSString *wifiSecurity; // ivar: _wifiSecurity
@property (retain, nonatomic) NSString *wifiTxRate; // ivar: _wifiTxRate
@property (retain, nonatomic) NSString *wrmChannelType; // ivar: _wrmChannelType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif